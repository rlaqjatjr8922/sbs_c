/*
    main �Լ��ּ� ���� 2����������
    swap�̶�� �̸��� �Լ��� �����ؼ�
    swap �Լ��� ȣ���ϸ鼭,2���� ���ڸ� �����ϰ�
    
*/
#include <stdio.h>

int swap(int *a,int *b) {
int q = *a;
*a = *b;
*b = q;


}

int main() {
int a = 2, b = 6;
printf("���� a:%d",a);
printf("���� b:%d\n",b);

swap(&a,&b);

printf("���� a:%d",a);
printf("���� b:%d",b);

   
return 0;

}


