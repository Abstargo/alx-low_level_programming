#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The size of memory to be allocated
 * 
 * Return: Pointer to the allocated memory
 * If malloc fails, the fuction terminates the process with
 * a status value of 98
*/

void *malloc_checked(unsigned int b)
{
    void *ptr;

    ptr = malloc(b);

    if (ptr == NULL)
    {
        exit(98);
    }

    return (ptr);
}
