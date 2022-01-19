#include <stdio.h>

int main() {
  //swch 
  /*   
    switch(표현식,조건){
        case 갑1:    //결과=갑1일때실행
            break;
            switch(표현식,조건){
        case 갑2:    //결과=갑2일때실행
            break;
            switch(표현식,조건){
        case 갑3:    //결과=갑3일때실행
            break;

*/

        int N;
        char S[10];
        printf("메뉴 번호:");
        scanf("%d",&N);


        switch(N){
        case 1:
                
                printf("아매리카노\n");
            break;
            
        case 2:   
        printf ("커피\n"); 
            break;
            
        case 3:    
        printf("아이스티");
            break;

        default:
        printf("없음"); 
        break;


        printf("주문 %s 임니다",*S);




    } 

return 0;

}