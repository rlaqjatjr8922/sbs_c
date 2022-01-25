#include <stdio.h>


int main(void) {
    
    //포인터 연산
    int num = 10;

    int *pnum = &num;

    printf("전: %d \n",*pnum );
    *pnum =20;
    printf("후: %d",*pnum);
    printf("num: %d",num);

    // 포인터 사용 이유
    //1. 메모리를  제어해야함
    //2. 동적 할당 및 메모리 접근
    //3. 자료구조&알고리즙의 코드적용
    return 0;
}