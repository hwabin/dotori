#include <stdio.h>

int main(void)
{
    printf("---------- 조사실 ----------\n\n");

    printf("이름은?   :   ");
    char name[100];
    scanf("%s",name,sizeof(name));

    printf("나이는?   :   ");
    int age;
    scanf("%d",&age);

    printf("키는?   :   ");
    float height;
    scanf("%f",&height);

    printf("몸무게는?   :   ");
    float weight;
    scanf("%f",&weight);
    
    char what[100];
    printf("범죄는?   :   ");
    scanf("%s",what,sizeof(what));


    printf("---------- 범죄자 ----------\n\n");
    printf(" 이름       :   %s\n",name);
    printf(" 나이       :   %d\n",age);
    printf(" 키         :   %f\n",height);
    printf(" 몸무게     :   %f\n",weight);
    printf(" 범죄       :   %s\n",what);

}