#include <stdio.h>

//��������
int n = 10;

//����� �Լ� ����

// ��ȯŸ�� �Լ���(�Ű�����1,�Ű�����2){���๮}
int sum(int a,int b){
    int res = a + b;
    return res; 
}

//main �Լ�
//:���α׷� ���� ��, �����������Ŵ� �Լ�

int main() {

    int x = 10;
    int y = 20;
    int res = sum(x,y);

    printf("�հ�:%d\n",res);
return 0;

}