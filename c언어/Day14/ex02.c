#include <stdio.h>
#include <string.h>
/*
    ����ä
    :�پ��� �ڷ����� ��������� ������ ���ο��ڷ���


     ctruct ����ä�̸�{
        
        �ڷ��� �����̸�
        �ڷ��� �����̸�
        �ڷ��� �����̸�


     };
    
    ����ä����
    struct ����ä�̸� �����̸�;

*/

//����ü ����
struct person
{
    //�̸�,����
    char name[30];
    int age;
};


int main() {

    //����ä����
    //���������ʱ�ȭ
    //�ɹ�������� {} �ȿ� ��������
    struct person boy = {"�����",20};
    struct person girl = {"���ڵ�",10};
    //���

    printf("boy �̸�%s, ����%d\n",boy.name,boy.age);
    printf("girl �̸�%s, ����%d\n",girl.name,girl.age);
    printf("over");


return 0;

}