#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    char word[1000], longest[1000];
    int i = 0, j = 0, max = 0;
    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    while (1) {
        if (s[i] != ' ' && s[i] != '\0') {
            word[j++] = s[i];
        } else {
            if (j > 0) {
                word[j] = '\0';
                if (j > max) {
                    max = j;
                    strcpy(longest, word);
                }
                j = 0;
            }
        }
        if (s[i] == '\0') {
            break;
        }
        i++;
    }
    printf("Tu dai nhat: %s\n", longest);
    printf("Do dai cua tu: %d\n", max);
    return 0;
}
