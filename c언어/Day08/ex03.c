#include <stdio.h>

/*
    포인터변수 : 주솟갑저장
    배열 이름:첫번째 요소의  주소값 의미

    포인터 배열
    :같은 자료형의 여러개의 주솟갑을 저장한변수 

*/



int main() {

    int n1 = 3,n2 = 6,n3 = 9;

    int *ptr1 = &n1;
    int *ptr2 = &n2;
    int *ptr3 = &n3;

    int *parr[3] = {ptr1,ptr2,ptr3};


    //주소와갑출력

    //갑
    printf("%d  %d   %d \n",*parr[0],*parr[1],*parr[2]);
    //주소
    printf("%p  %p  %p \n",parr[0],parr[1],parr[2]);

    printf("over");
return 0;

}