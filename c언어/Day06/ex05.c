#include <stdio.h>

int main() {



    //2���� �迭 ����
    int a [2] [3] = {{1,2,3},{4,5,6}};

    // int = 4 byte 
    printf ("%d \n", sizeof(a) / sizeof(int) );
    printf ("%d \n", sizeof(a) / sizeof(a[0]) ); // ���ǰ���
    printf ("%d \n", sizeof(a[0]) / sizeof(int) );// ���ǰ���

    for (int i = 0; i < 2; i++){
        for (int u = 0; u < 3; u++){
            printf ("%d" , a[i][u]);
        }
    printf("\n");
    
    }
    


    printf("over");
return 0;

}