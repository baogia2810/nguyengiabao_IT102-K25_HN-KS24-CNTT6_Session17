#include <stdio.h>
#include <string.h>

int main() {
    char s1[2000], s2[1000];
    int i, j;
    printf("Nhap chuoi 1: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';
    printf("Nhap chuoi 2: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';
    i = strlen(s1);
    for (j = 0; s2[j] != '\0'; j++) {
        s1[i] = s2[j];
        i++;
    }
    s1[i] = '\0';
    printf("Chuoi sau khi noi: %s\n", s1);
    return 0;
}
