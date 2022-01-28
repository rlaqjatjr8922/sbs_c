#include <stdio.h>
// void : 반환타입이 없음

void func(int *a,int *b){
    *a = 100;
    *b =200;
}

int main() {

    int a = 10, b =0;
    printf("전 : \n");
    printf("a : %d   \nb : %d\n",a,b);
    //참조전달
    // 주소갑을 전달함
    func(&a,&b);

    printf("후 : \n");
    printf("a : %d   \nb : %d",a,b);

return 0;

}