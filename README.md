# COS - A hobbyist OS project

COS is a hobbyist OS development project which I am currently working on to further my programming skills in C and C++. I intend to stick to these two languages for the whole project (not like it's going to go much further than that).

Documentation is very brief, so do not hope for much. I am writing just as much as I will need for myself.

## Capabilities

Nothing, really. I will update this as time goes by and I do more stuff.

## Setup

Setting up should be pretty easy, assuming you have a x86_64-elf targeting cross compiler already installed and in your path. If you do, then just follow these steps:

```
git clone https://github.com/ryuukumar/cos-0.07.git
cd cos-0.07
sudo chmod +x build.sh   # I suggest going through this script before running it
./build.sh
```

This will generate a file `image.iso` inside your working directory. Use VMWare or your favourite VM emulator (or put it on a liveCD if you're brave enough) to run and test it out.