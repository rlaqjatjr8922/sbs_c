#include <stdio.h>

int main() {
    //������ϱ�
    int input;
    printf("����:");
    scanf("%d", &input);

    printf("%d �Ǿ�� :" , input);

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