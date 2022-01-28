#include <stdio.h>
// void : 반환타입이 없음

void func(int a,int b){
    a = 100;
    b =200;
}

int main() {

    int a = 10, b =0;
    printf("전 : \n");
    printf("a : %d   \nb : %d\n",a,b);
    //값에 의한전달
    // 변슈가가진 갑을 복사하여 전달
    func(a,b);

    printf("후 : \n");
    printf("a : %d   \nb : %d",a,b);

return 0;

}