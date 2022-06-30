#ifndef MAIN_H
#define MAIN_H
/**
 * Author: Raheem Salifu Kasim
 * Desc: Header file containing all the prototypes used in 0x0C-more_alloc_free
 */
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_arrange(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, usigned int new_size);

#endif
