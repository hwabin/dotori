#include <stdio.h>

int main(void)
{       printf("정수 \n");
        int age = 12;
        int weight = 68;
        printf("%d , %d\n", age, weight);
        age = 13;
        printf("%d , %d\n\n", age, weight);
        

        printf("실수\n");
        float a = 174.4;
        printf("%f\n", a); //소숫점 6자리까지 기본으로 나타남
        printf("%.2f\n", a); // 소숫점 2자리까지 나타냄

        double b = 4.321;
        printf("%.2f\n\n", b);

        
        printf("상수\n");
        cnsot int YEAR = 2000; //const는 상수(변하지않는 js언어랑같음)
        printf("태어난 년도 : %d\n", YEAR);
        return 0;
}