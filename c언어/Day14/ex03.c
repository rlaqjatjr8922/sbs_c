#include <stdio.h>
#include <string.h>

/*
    ����ä �迭

    �迭�� ��Ұ� ����ä�� �迭

*/






//����ü ����
struct person
{
    //�̸�,����
    char name[30];
    int age;
};


int main() {


    //����ä �迵 ����
    struct person boy[3] = {
        {"���ڵ�",12},
        {"���ڵ�",14},
        {"���ڵ�",16}

    };

    struct person girl[3];
    strcpy(girl[0].name,"���ڵ�",10);
    strcpy(girl[1].name,"���ڵ�",20);
    strcpy(girl[2].name,"���ڵ�",30);

    for (int i = 0; i < 3; i++)
    {
        printf("boy �̸�%s, ����%d\n",boy[i].name,boy[i].age);
        printf("girl �̸�%s, ����%d\n",girl[i].name,girl[i].age);
        printf("\n");
    }
    

    //���


    printf("over");


return 0;

}