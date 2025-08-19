#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, j, check = 1;
    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    i = 0;
    j = strlen(s) - 1;
    while (i < j) {
        if (s[i] != s[j]) {
            check = 0;
            break;
        }
        i++;
        j--;
    }
    if (check) {
        printf("La palindrome\n");
    } else {
        printf("Khong phai palindrome\n");
    }
    return 0;
}
