#include <stdio.h>
// void : ��ȯŸ���� ����

void func(int a,int b){
    a = 100;
    b =200;
}

int main() {

    int a = 10, b =0;
    printf("�� : \n");
    printf("a : %d   \nb : %d\n",a,b);
    //���� ��������
    // ���������� ���� �����Ͽ� ����
    func(a,b);

    printf("�� : \n");
    printf("a : %d   \nb : %d",a,b);

return 0;

}