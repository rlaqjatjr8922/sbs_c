#include <stdio.h>

int main() {



    //2차원 배열 선원
    int a [2] [3] = {{1,2,3},{4,5,6}};

    // int = 4 byte 
    printf ("%d \n", sizeof(a) / sizeof(int) );
    printf ("%d \n", sizeof(a) / sizeof(a[0]) ); // 행의갰수
    printf ("%d \n", sizeof(a[0]) / sizeof(int) );// 열의개수

    for (int i = 0; i < 2; i++){
        for (int u = 0; u < 3; u++){
            printf ("%d" , a[i][u]);
        }
    printf("\n");
    
    }
    


    printf("over");
return 0;

}