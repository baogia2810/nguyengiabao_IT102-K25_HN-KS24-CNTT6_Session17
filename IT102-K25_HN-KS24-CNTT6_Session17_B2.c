#include <stdio.h>

int main() {
    char s[1000];
    int c;
    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);
    printf("1. In chuoi hoa\n");
    printf("2. In chuoi thuong\n");
    printf("Nhap lua chon: ");
    scanf("%d", &c);
    getchar();
    if (c == 1) {
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - 32;
            }
        }
    } else if (c == 2) {
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32;
            }
        }
    }
    printf("Ket qua: %s\n", s);
    return 0;
}
