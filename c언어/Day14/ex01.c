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
    struct person boy,girl;

    //��� ���ٿ� ����(.)
    //boy,girl �ǿ����ڸ�
    strcpy(boy.name,"�����");
    strcpy(girl.name,"�����");

    //boy,girl�� age(����)
    boy.age = 20;
    girl.age = 10;

    //���

    printf("boy �̸�%s, ����%d\n", boy.name, boy.age);
    printf("girl �̸�%s, ����%d\n", girl.name, girl.age);
    printf("over");


return 0;

}