#include <stdio.h>

int main() {
    char ch;
    char str[100];
    char sen[100];

    scanf("%c", &ch);
    getchar(); 

    scanf("%s", str);
    getchar();

    fgets(sen, sizeof(sen), stdin);
   
    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s", sen);

    return 0;
}
