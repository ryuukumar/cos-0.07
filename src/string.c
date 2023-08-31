#include <string.h>

size_t strlen (const char* str) {
    size_t ret = 0;
    while (str[ret] != 0) ret++;
    return ret;
}

void reverse (char* str) {
    int len = strlen(str);

    for (int i=0; i<len/2; i++) {
        str[i] ^= str[len-(i+1)];
        str[len-(i+1)] ^= str[len];
        str[i] ^= str[len-(i+1)];
    }
}

void itos (int32_t i, char* buf, int32_t b) {
    int ctr = 0;
    while(i) {
        buf[ctr++] = i%b;
        i/=b;
    }
    reverse(buf);
}