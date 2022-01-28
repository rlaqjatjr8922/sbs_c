#include <stdio.h>


int number = 0;

void pr (void){
    printf("(pr)전역 변수 number 는 %d\n",number);
}

int main(void) {
    //지역변수
    int number = 200;
    printf("(main)지역 변수 number 는 %d\n",number);

    if (number > 10)
    {
        int number = 300;
        printf("(조건문)지역 변수 number 는 %d\n",number);
    }
    

    //함수호출
    pr();

    printf("over");
return 0;

}