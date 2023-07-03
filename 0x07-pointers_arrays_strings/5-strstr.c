#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to the string.
 * @needle: Pointer to the substring.
 *
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle) {
    if (*needle == '\0') {
        return haystack;
    }

    while (*haystack != '\0') {
        char *h = haystack;
        char *n = needle;

        while (*n != '\0' && *h == *n) {
            h++;
            n++;
        }

        if (*n == '\0') {
            return (haystack);
        }

        haystack++;
    }

    return (0);
}
