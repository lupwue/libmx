#include "libmx.h"

 char *mx_strjoin(const char *s1, const char *s2) {
    char *new;

    if (s1 && !s2) 
        return mx_strdup(s1);
    if (!s1 && s2) 
        return mx_strdup(s2);
    if (s1 && s2) {
        new = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
        mx_strcpy(new, s1);
        mx_strcat(new, s2);
    }
    return ((!s1 && !s2) || !new) ? NULL : new;
}
