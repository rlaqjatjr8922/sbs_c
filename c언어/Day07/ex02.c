#include <stdio.h>


int main(void) {
    
    //������ ����
    int num = 10;

    int *pnum = &num;

    printf("��: %d \n",*pnum );
    *pnum =20;
    printf("��: %d",*pnum);
    printf("num: %d",num);

    // ������ ��� ����
    //1. �޸𸮸�  �����ؾ���
    //2. ���� �Ҵ� �� �޸� ����
    //3. �ڷᱸ��&�˰����� �ڵ�����
    return 0;
}