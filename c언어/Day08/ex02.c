#include <stdio.h>
/*
   포인터 &배열
    -배열의이름 : 첫요소의주소값
    -int arr[3];
    -배열접근
    -1. 인댁스:arr[a]
    -2.참조연산:*(arr + a)


*/


int main() {
    int arr[3] = {1,2,3};
    char q[3][3] = {{"1","2","3"},{"4","5","6"}};
    //인댁스
    printf("%d  %d  %d\n",arr[1],arr[2],arr[0]);
    // 포인터
    printf("%d  %d  %d  ",*(arr+1),*(arr+2),*(arr+0));
return 0;

}