#include <stdio.h>

/*
    typedef
    :기존 자료형애 새로운 이름부여
      typedef 기존자료형 새로운자료형;

    ex) typedef int INT ;


        typedef int INT {
        }새로운이름;

        typedef  struct 구조채이름 새로문이름;
    
    구조채 선언 :

*/

typedef struct 
{
    int x;
    int y;
}POINT;

//구조채
struct  person
{
    char name[30];
    int age;
};
//정의됀구조채를 typedef 선언

typedef struct person PERSON;



int main() {
    //typedef 사용시 간결함
    POINT position = {30,40};
    PERSON p = {"김코딩",10};

    printf("x,y:%d,%d\n",position.x, position.y);
    printf("%s:%d\n",p.name, p.age);




    printf("over");
return 0;

}