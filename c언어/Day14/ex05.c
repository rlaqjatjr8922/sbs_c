#include <stdio.h>

/*
    ����ä������

*/

typedef struct 
{
    char name[30];
    int age;
}Person;


int main() {

    Person boy = {"sbs",30};
    //����ä������
    Person *ptr = &boy;

    //ȭ��ǥ ������ (->)
    //:�����͸ɹ�������
    printf("%s : %d\n",(*ptr).name,(*ptr).age);
    printf("%s : %d\n",ptr->name,ptr->age);
return 0;

}