#include "util.h"

int main(void) {
    lst_t *lst = NULL;
    
    lst_addfront(&lst, lst_new(10));
    lst_addfront(&lst, lst_new(45));
    lst_addback(&lst, lst_new(3));
    lst_addback(&lst, lst_new(1));
    lst_addback(&lst, lst_new(23));

    lst_print(lst);
    printf("lst_size -> %ld\n", lst_size(lst));

    lst_delelem(&lst, 3);
    lst_delelem(&lst, 10);

    lst_print(lst);
    printf("lst_size -> %ld\n", lst_size(lst));
    lst_clear(lst);
    return 0;
}