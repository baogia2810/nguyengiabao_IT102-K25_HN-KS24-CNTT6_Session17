#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s1[1000], s2[1000];
    int i, len1, len2, check = 1;
    printf("Nhap chuoi 1: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';
    printf("Nhap chuoi 2: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';
    len1 = strlen(s1);
    len2 = strlen(s2);
    if (len1 != len2) {
        check = 0;
    } else {
        for (i = 0; i < len1; i++) {
            if (tolower(s1[i]) != tolower(s2[i])) {
                check = 0;
                break;
            }
        }
    }
    if (check) {
        printf("Giong nhau\n");
    } else {
        printf("Khac nhau\n");
    }
    return 0;
}
