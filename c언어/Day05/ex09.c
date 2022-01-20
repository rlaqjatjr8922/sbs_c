#include <stdio.h>

int main() {
    //약수구하기
    int input;
    printf("정수:");
    scanf("%d", &input);

    printf("%d 의약수 :" , input);

    for (int i = 1; i <= input; i++)
    {
        if( input % i == 0){
            printf("%d ",i);
        }
    }
    printf("\n");






    printf("hello c~!");
return 0;

}