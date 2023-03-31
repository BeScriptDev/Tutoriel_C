#include "util.h"

size_t bs_strlen(const char *s) {
    size_t i = 0;
    while (s[i])
        i++;
    return i;
}

char    *bs_strcpy(char *dest, const char *s) {
    size_t i = 0;
    while (s[i]) {
        dest[i] = s[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
char    *bs_strdup(const char *s) {
    char *tmp = malloc(sizeof(char) * (bs_strlen(s) + 1));
    if (!tmp)
        exit(1);
    return bs_strcpy(tmp, s);
}

struct point_s *alloc_point(int size) {
    point_t *tmp = malloc(sizeof(struct point_s) * size);
    if (!tmp)
        exit(1);
    return tmp;
}

void    fill_point(struct point_s * arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i].x = (i + 1) * 4;
        arr[i].y = (i + 5) * 40;
    }
}

void    print_point(struct point_s *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("arr[%d].x = %d, arr[%d].y = %d\n", i, arr[i].x, i, arr[i].y);
    }
}

void    update_point(struct point_s *point) {
    point->x = 90;
    point->y = 1443;
}



