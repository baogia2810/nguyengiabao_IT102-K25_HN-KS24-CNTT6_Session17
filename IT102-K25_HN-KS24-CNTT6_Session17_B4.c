#include <stdio.h>

int main() {
    char s[1000], c;
    int i, j = 0;
    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &c);
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
    printf("Chuoi sau khi xoa: %s", s);
    return 0;
}
