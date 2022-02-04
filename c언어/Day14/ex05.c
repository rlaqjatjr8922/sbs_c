#include <stdio.h>

/*
    구조채포인터

*/

typedef struct 
{
    char name[30];
    int age;
}Person;


int main() {

    Person boy = {"sbs",30};
    //구조채포인터
    Person *ptr = &boy;

    //화살표 연산자 (->)
    //:포인터맴버애접근
    printf("%s : %d\n",(*ptr).name,(*ptr).age);
    printf("%s : %d\n",ptr->name,ptr->age);
return 0;

}