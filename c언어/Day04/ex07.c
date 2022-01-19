#include <stdio.h>

int main() {
 

        int N;
        char S[10];
        printf("성적:");
        scanf("%d",&N);

        //break;가없으면 다음코드도실행

        switch(N){
        case 100:
        case 90:
            printf("A");
            break;
        case 80:
        case 70:
        printf("B");
            break;
         case 60:
         case 50:
            printf("C");
            break;

        default:
        printf("없음"); 
        break;


        printf("주문  임니다");




    } 

return 0;

}