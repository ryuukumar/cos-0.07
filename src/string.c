#include <string.h>

/*!
Get the length of a standard string (terminating with 0).

@param  str pointer to string
@return string size
*/
size_t strlen (const char* str) {
    size_t ret = 0;
    while (str[ret] != 0) ret++;
    return ret;
}

/*!
Reverse a standard string (terminating with 0).

@param  str string to reverse
*/
void reverse (char* str) {
    int len = strlen(str);

    for (int i=0; i<len/2; i++) {
        str[i] ^= str[len-(i+1)];
        str[len-(i+1)] ^= str[len];
        str[i] ^= str[len-(i+1)];
    }
}

/*!
Convert integer to representative string with base b.

@param  i integer to convert
@param  buf memory to save integer
@param  b base
*/
void itos (int32_t i, char* buf, int32_t b) {
    int ctr = 0;
    while(i) {
        buf[ctr++] = '0' + i%b;
        i/=b;
    }
    reverse(buf);
}