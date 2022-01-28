#include <stdio.h>

//전역변수
int n = 10;

//사용자 함수 정의

// 반환타입 함수명(매개변수1,매개변수2){실행문}
int sum(int a,int b){
    int res = a + b;
    return res; 
}

//main 함수
//:프로그램 시행 시, 자장번저실행돼는 함수

int main() {

    int x = 10;
    int y = 20;
    int res = sum(x,y);

    printf("합개:%d\n",res);
return 0;

}