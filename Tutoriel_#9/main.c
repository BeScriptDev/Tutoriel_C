#include <stdio.h>
#include <stdlib.h>

size_t bs_strlen(const char *s) {
    size_t i = 0;
    while (s[i])
        i++;
    return i;
}

char *bs_strcpy(char *dest, const char *src) {
    size_t i = 0;
    while (src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char *bs_strdup(const char *s) {
    char *tmp = malloc(sizeof(char) * (bs_strlen(s) + 1));
    if (!tmp)
        exit(1);
    return bs_strcpy(tmp, s);
}

int main(void) {
    char *str = bs_strdup("Bonjour, comment vas tu ?");
    printf("%s\n", str);
    free(str);
    return 0;
}