#include "util.h"

lst_t *lst_new(int n) {
    lst_t *tmp = malloc(sizeof(struct lst_s));
    if (!tmp)
        return NULL;
    tmp->n = n;
    tmp->next = NULL;
    return tmp;  
}

size_t lst_size(lst_t *lst) {
    size_t i = 0;
    lst_t *tmp = lst;
    while(tmp) {
        i++;
        tmp = tmp->next;
    }
    return i;
}

void lst_print(lst_t *lst) {
    lst_t *tmp = lst;
    while (tmp != NULL) {
        printf("%p, n-> %d, next-> %p\n", tmp, tmp->n, tmp->next);
        tmp = tmp->next;
    }
}


void lst_addfront(lst_t **lst, lst_t *new) {
    new->next = *lst;
    *lst = new;
}

void lst_addback(lst_t **lst, lst_t *new) {
    if (*lst == NULL) {
        *lst = new;
    } else {
        lst_t *tmp = *lst;
        while (tmp) {
            if (tmp->next == NULL) {
                tmp->next = new;
                return;
            }
            tmp = tmp->next;
        }
    }
}

void lst_delfront(lst_t **lst) {
    if (*lst != NULL) {
        lst_t *tmp = (*lst)->next;
        free(*lst);
        *lst = tmp;
    }
}

void lst_delback(lst_t **lst) {
    if (*lst != NULL) {
        lst_t *tmp = *lst;
        while (tmp) {
            if (tmp->next->next == NULL) {
                free(tmp->next);
                tmp->next = NULL;
                return;
            }
            tmp = tmp->next;
        }
    }
}

void lst_delelem(lst_t **lst, int n) {
    lst_t *current = *lst;
    lst_t *old = NULL;
    
    if (current != NULL && current->n == n) {
        lst_delfront(lst);
        return;
    }

    while (current != NULL && current->n != n) {
        old = current;
        current = current->next;
    }

    if (current == NULL)
        return;
    
    old->next = current->next;
    free(current);
}

void lst_clear(lst_t *lst) {
    if (lst != NULL) {
        lst_t *tmp;
        while (lst) {
            tmp = lst->next;
            free(lst);
            lst = tmp;
        }
        lst = NULL;
    }
}

