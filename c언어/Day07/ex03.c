#include <stdio.h>
//함수정의
//반환타입 함수명 (매개변수1,매개변수2,...){실행문;}

int sum(int a,int b){
    int sum = a + b;
    return sum;
    //return ();
    //1.함수종료
    //2.(갑)을 함수를 호출한 자리로 반환
}
int main() {

    int a = 10, b =20;
    int result = sum(a,b);


    printf("a : %d\nb : %d\n",a,b);
    printf("result : %d",result);
return 0;

}