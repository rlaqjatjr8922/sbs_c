#include <stdio.h>
#include <stdlib.h>//�����״��Լ�

/*
    malloc(size)
    :�Ÿ𸮸� size(byte) ��ŭ�����Ҵ�
    -�Ÿ��� �ּҰ���ȯ
    -��ȯ���� �����ͺ����������ϱ�����  ��������ȯ
*/
int main() {

    //����(int) �Ÿ����� 5���Ҵ�
    int *ptr = (int *) malloc( sizeof(int)*5);
    //�Ҽ�(double) �Ÿ����� 5���Ҵ�
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
    

    //�Ÿ����� ����
    // free(������)
    if (ptr != NULL)
     free(ptr);
    if (dptr != NULL)
     free(dptr);


    printf("over");
return 0;

}