/*
    main 함수애서 변수 2개를선언후
    swap이라는 이름의 함수를 정의해서
    swap 함수를 호출하면서,2개의 인자를 전달하고
    
*/
#include <stdio.h>

int swap(int *a,int *b) {
int q = *a;
*a = *b;
*b = q;


}

int main() {
int a = 2, b = 6;
printf("변수 a:%d",a);
printf("변수 b:%d\n",b);

swap(&a,&b);

printf("변수 a:%d",a);
printf("변수 b:%d",b);

   
return 0;

}


