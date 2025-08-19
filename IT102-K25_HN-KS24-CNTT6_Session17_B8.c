#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;
    printf("Nhap mat khau: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    if (strlen(s) >= 8) {
        for (i = 0; s[i] != '\0'; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                hasUpper = 1;
            } else if (s[i] >= 'a' && s[i] <= 'z') {
                hasLower = 1;
            } else if (s[i] >= '0' && s[i] <= '9') {
                hasDigit = 1;
            } else {
                hasSpecial = 1;
            }
        }
    }
    if (strlen(s) >= 8 && hasUpper && hasLower && hasDigit && hasSpecial) {
        printf("Hop le\n");
    } else {
        printf("Khong hop le\n");
    }
    return 0;
}
