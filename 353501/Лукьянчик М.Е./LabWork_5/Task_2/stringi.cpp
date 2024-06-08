#include "stringi.h"

stringi::stringi() {}

void *stringi::memcpy(void *dest, const void *src, size_t n)
{
    unsigned char* dst = static_cast<unsigned char*>(dest);
    const unsigned char* source = static_cast<const unsigned char*>(src);
    for (size_t i = 0; i < n; ++i) {
        dst[i] = source[i];
    }
    return dest;
}

void *stringi::memmove(void *dest, const void *src, size_t n)
{
    unsigned char* dst = static_cast<unsigned char*>(dest);
    const unsigned char* source = static_cast<const unsigned char*>(src);
    unsigned char* tmp = new unsigned char[n];
    if (tmp == nullptr) {
        return nullptr;
    }
    memcpy(tmp, source, n);
    memcpy(dst, tmp, n);
    delete[] tmp;

    return dest;
}

char *stringi::strcpy(char *dest, const char *src)
{
    char* dst = dest;
    const char* source = src;
    while (*source != '\0') {
        *dst = *source;
        ++dst;
        ++source;
    }
    *dst = '\0';

    return dest;
}

char *stringi::strncpy(char *dest, const char *src, size_t n)
{
    char* dst = dest;
    const char* source = src;
    size_t i = 0;
    while (*source != '\0' && i < n) {
        *dst = *source;
        ++dst;
        ++source;
        ++i;
    }
    while (i < n) {
        *dst = '\0';
        ++dst;
        ++i;
    }

    return dest;
}

char *stringi::strcat(char *dest, const char *src)
{
    char* dst_end = dest + strlen(dest);
    const char* source = src;
    char* dst_current = dst_end;
    while (*source != '\0') {
        *dst_current = *source;
        ++dst_current;
        ++source;
    }
    *dst_current = '\0';

    return dest;
}

char *stringi::strncat(char *dest, const char *src, size_t n)
{
    char* dst_end = dest + strlen(dest);
    const char* source = src;
    char* dst_current = dst_end;
    size_t i = 0;
    while (*source != '\0' && i < n) {
        *dst_current = *source;
        ++dst_current;
        ++source;
        ++i;
    }
    *dst_current = '\0';

    return dest;
}

int stringi::memcmp(const void *ptr1, const void *ptr2, size_t n)
{
    const unsigned char* s1 = static_cast<const unsigned char*>(ptr1);
    const unsigned char* s2 = static_cast<const unsigned char*>(ptr2);

    for (size_t i = 0; i < n; ++i) {
        if (*s1 > *s2) {
            return 1;
        } else if (*s1 < *s2) {
            return -1;
        }
        ++s1;
        ++s2;
    }

    return 0;
}

int stringi::strcmp(const char *str1, const char *str2)
{
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 < *str2) {
            return -1;
        } else if (*str1 > *str2) {
            return 1;
        }
        ++str1;
        ++str2;
    }
    if (*str1 == '\0' && *str2 != '\0') {
        return -1;
    } else if (*str1 != '\0' && *str2 == '\0') {
        return 1;
    } else {
        return 0;// =
    }
}

int stringi::strcoll(const char *s1, const char *s2)
{
    while (true) {
        int result = strncmp(s1, s2, 1);
        if (result != 0 || *s1 == '\0' || *s2 == '\0') {
            return result;
        }
        ++s1;
        ++s2;
    }
}

int stringi::strncmp(const char *str1, const char *str2, size_t n)
{
    while (n > 0 && *str1 != '\0' && *str2 != '\0') {
        if (*str1 < *str2) {
            return -1;
        } else if (*str1 > *str2) {
            return 1;
        }
        ++str1;
        ++str2;
        --n;
    }

    if (n == 0) {
        return 0;
    } else if (*str1 == '\0' && *str2 != '\0') {
        return -1;
    } else if (*str1 != '\0' && *str2 == '\0') {
        return 1;
    } else {
        return 0; // =
    }
}

size_t stringi::strxfrm(char *dest, const char *src, size_t n)
{
    size_t srcLen = stringi::strlen(src);

    if (srcLen + 1 <= n) {
        stringi::strcpy(dest, src);
        return srcLen;
    } else {
        return srcLen + 1;
    }
}

char *stringi::strtok(char *s1, const char *s2)
{
    static char* carry = nullptr;
    char* token_start = nullptr;
    if (s1 != nullptr) {
        token_start = s1;
    } else if (carry == nullptr) {
        return nullptr;
    } else {
        token_start = carry;
    }
    while (*token_start != '\0') {
        bool delim_found = false;
        for (const char* delim_ptr = s2; *delim_ptr != '\0'; ++delim_ptr) {
            if (*token_start == *delim_ptr) {
                delim_found = true;
                break;
            }
        }
        if (!delim_found) {
            break;
        }
        ++token_start;
    }
    if (*token_start == '\0') {
        carry = nullptr;
        return nullptr;
    }
    char* token_end = token_start;
    while (*token_end != '\0') {
        bool delim_found = false;
        for (const char* delim_ptr = s2; *delim_ptr != '\0'; ++delim_ptr) {
            if (*token_end == *delim_ptr) {
                delim_found = true;
                break;
            }
        }
        if (delim_found) {
            break;
        }
        ++token_end;
    }
    if (*token_end == '\0') {
        carry = nullptr;
    } else {
        *token_end = '\0';
        carry = token_end + 1;
    }

    return token_start;
}

void *stringi::memset(void *dest, int value, size_t n)
{
    unsigned char val = static_cast<unsigned char>(value);
    unsigned char* i = static_cast<unsigned char*>(dest);
    unsigned char* end = i + n;
    while (i != end) {
        *i = val;
        ++i;
    }
    return dest;
}

const char *stringi::strerror(int errnum)
{
    switch (errnum) {
    case 1:
        return "Error 1: Invalid memory access";
    case 2:
        return "Error 2: File not found";
    case 3:
        return "Error 3: Invalid argument";
    default:
        return "Unknown error";
    }
}

size_t stringi::strlen(const char *str)
{
    size_t length = 0;
    while (str[length] != '\0') {
        ++length;
    }
    return length;
}
