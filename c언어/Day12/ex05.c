#include <stdio.h>
#include <stdlib.h>//동적항당함수

/*
    malloc(size)
    :매모리름 size(byte) 만큼동적할당
    -매모리의 주소갑반환
    -반환댄갑을 포인터변수로저장하기의해  강재형변환
*/
int main() {

    //정수(int) 매모라공간 5개할당
    int *ptr = (int *) malloc( sizeof(int)*5);
    //소수(double) 매모라공간 5개할당
    double *dptr = (double *) malloc( sizeof(double)*2);

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = (i+1) * 10;
    }

    for (int i = 0; i < 5; i++)
    {
        dptr[i] = (i+1) * 1.5;
    }
 printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",ptr[i]);
    }

 printf("\n");

    for (int i = 0; i < 5; i++)
    {
         printf("%f ",dptr[i]);
    }
    

    //매모리지정 해재
    // free(포인터)
    if (ptr != NULL)
     free(ptr);
    if (dptr != NULL)
     free(dptr);


    printf("over");
return 0;

}