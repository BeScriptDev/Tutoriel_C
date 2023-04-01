#ifndef UTIL_H
#define UTIL_H

#include <stdlib.h>
#include <stdio.h>

typedef struct lst_s {
    int n;
    struct lst_s *next;
} lst_t;

lst_t *lst_new(int n);

size_t lst_size(lst_t *lst);

void lst_print(lst_t *lst);
void lst_addfront(lst_t **lst, lst_t *new);
void lst_addback(lst_t **lst, lst_t *new);
void lst_delfront(lst_t **lst);
void lst_delback(lst_t **lst);
void lst_delelem(lst_t **lst, int n);
void lst_clear(lst_t *lst);

#endif