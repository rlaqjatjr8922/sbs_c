#include <stdio.h>

int main() {
    int num;
    //무한반복 : 조건을(1)로하면됌
   do {
    printf("1. 주문,2. 바구니,1. 종료\n");
    printf("매뉴");
    scanf("%d",&num);

    if(num == 1 ){
        printf("주문");

    }
        if(num == 2 ){
        printf("담겼다");

    }
   } while (num != 0);

        /* code */
    printf("종료\n");
    



return 0;


}