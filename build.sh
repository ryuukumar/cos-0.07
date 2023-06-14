
echo -e "\e[1;33m\n# ---+\n# Building OS binaries\n# ---+\n\e[0m"

make -j4

echo -e "\e[1;33m\n# ---+\n# Building Limine-deploy\n# ---+\n\e[0m"

# Download the latest Limine binary release.
git clone https://github.com/limine-bootloader/limine.git --branch=v4.x-branch-binary --depth=1
 
# Build limine-deploy.
make -C limine

echo -e "\e[1;33m\n# ---+\n# Populating ISO directory\n# ---+\n\e[0m"

# Create a directory which will be our ISO root.
mkdir -p iso_root
 
# Copy the relevant files over.
cp -v myos.elf limine.cfg limine/limine.sys \
      limine/limine-cd.bin limine/limine-cd-efi.bin iso_root/
 
# Create the EFI boot tree and copy Limine's EFI executables over.
mkdir -p iso_root/EFI/BOOT
cp -v limine/BOOT*.EFI iso_root/EFI/BOOT/
 
echo -e "\e[1;33m\n# ---+\n# Creating ISO\n# ---+\n\e[0m"
 
# Create the bootable ISO.
xorriso -as mkisofs -b limine-cd.bin \
        -no-emul-boot -boot-load-size 4 -boot-info-table \
        --efi-boot limine-cd-efi.bin \
        -efi-boot-part --efi-boot-image --protective-msdos-label \
        iso_root -o image.iso \
        && rm -rvf iso_root
 
# Install Limine stage 1 and 2 for legacy BIOS boot.
./limine/limine-deploy image.iso

echo -e "\e[1;32m\n# ---+\n# ISO generated successfully\n# ---+\n\e[0m"
