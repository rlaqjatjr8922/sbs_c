#include <stdio.h>

/*
    배열포인터
    :배열을가리키는 포인터 변수

    포인터 배열 선언 : int *arr[3];
    배열 포인터 선언 : int (*arr)[3];
*/


int main() {

    int arr[2][3] = {
                        {1,2,3},
                        {4,5,6}
                    };


    int i , j;
    //2차원포인터
    int (*arrptr)[3] = arr;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
        printf("%d",arrptr[i][j]);
        }
        printf("\n");
    }
    





    printf("over");
return 0;

}