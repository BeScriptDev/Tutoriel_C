#ifndef UTIL_H
#define UTIL_H

#include <stdio.h>
#include <stdlib.h>

typedef struct point_s {
    int x;
    int y;
} point_t;

typedef struct user_s {
    char *firstname;
    char *lastname;
    int age;
} user_t;

size_t  bs_strlen(const char *s);
char    *bs_strcpy(char *dest, const char *s);
char    *bs_strdup(const char *s);
struct point_s *alloc_point(int size);
void    fill_point(struct point_s * arr, int size);
void    print_point(struct point_s *arr, int size);
void    update_point(struct point_s *point);

#endif