#include <stdio.h>

int main() {
    int num;
    //���ѹݺ� : ������(1)���ϸ��
   do {
    printf("1. �ֹ�,2. �ٱ���,1. ����\n");
    printf("�Ŵ�");
    scanf("%d",&num);

    if(num == 1 ){
        printf("�ֹ�");

    }
        if(num == 2 ){
        printf("����");

    }
   } while (num != 0);

        /* code */
    printf("����\n");
    



return 0;


}