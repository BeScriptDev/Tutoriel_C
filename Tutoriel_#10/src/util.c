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