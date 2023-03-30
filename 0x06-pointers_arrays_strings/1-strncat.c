#include "main.h"

char *_strncat(char* dest, const char* src, size_t n)
{
    char* dest_ptr = dest + strlen(dest);
    size_t i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest_ptr[i] = src[i];
    }
    dest_ptr[i] = '\0';
    return dest;
}
