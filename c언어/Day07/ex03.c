#include <stdio.h>
//�Լ�����
//��ȯŸ�� �Լ��� (�Ű�����1,�Ű�����2,...){���๮;}

int sum(int a,int b){
    int sum = a + b;
    return sum;
    //return ();
    //1.�Լ�����
    //2.(��)�� �Լ��� ȣ���� �ڸ��� ��ȯ
}
int main() {

    int a = 10, b =20;
    int result = sum(a,b);


    printf("a : %d\nb : %d\n",a,b);
    printf("result : %d",result);
return 0;

}