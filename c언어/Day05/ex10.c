#include <stdio.h>

int main() {
    //최대공약수 , 공배수 , 최소공배수 구하기
    //두 정수 입력
    int A,B;
    int big, small;
    int gcd, lcm;
    int R;
    printf("정수 a ,b:");
    scanf("%d %d" , &A , &B);
    //두수의크기비교
    if( A >= B){
        big = A;
        small = B;}

        else
        {big = B;
        small = A;}

        while (1)
        {
            R = big % small;
            big = small;
            small = R;
            if (R == 0){
                gcd = big;
                lcm = A * B / gcd;
                break;
            }
            
            }
        printf("최대: %d\n",gcd);
        printf("최소:%d\n",lcm);
        
        
        







    printf("끝");
return 0;

}