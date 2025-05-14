#include <stdio.h>

int main(void)
{
    // char c = 'a';
    // printf("%c\n", c);

    char str[256]; //문자열이면 사이즈를 정해줘야한다.
    printf("문자를 입력하세요 : ");
    scanf_s("%s", str, sizeof(str)); //sizeof를 통해 256의 사이즈를 넘지않겠다선언
    printf("%s\n", str);

}