#include <stdio.h>

/*
    typedef
    :���� �ڷ����� ���ο� �̸��ο�
      typedef �����ڷ��� ���ο��ڷ���;

    ex) typedef int INT ;


        typedef int INT {
        }���ο��̸�;

        typedef  struct ����ä�̸� ���ι��̸�;
    
    ����ä ���� :

*/

typedef struct 
{
    int x;
    int y;
}POINT;

//����ä
struct  person
{
    char name[30];
    int age;
};
//���ǉ±���ä�� typedef ����

typedef struct person PERSON;



int main() {
    //typedef ���� ������
    POINT position = {30,40};
    PERSON p = {"���ڵ�",10};

    printf("x,y:%d,%d\n",position.x, position.y);
    printf("%s:%d\n",p.name, p.age);




    printf("over");
return 0;

}