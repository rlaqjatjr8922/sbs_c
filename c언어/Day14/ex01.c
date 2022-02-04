#include <stdio.h>
#include <string.h>
/*
    구조채
    :다양한 자료형의 변수를묵어서 정이한 새로웅자료형


     ctruct 구조채이름{
        
        자료형 변수이름
        자료형 변수이름
        자료형 변수이름


     };
    
    구조채선언
    struct 구조채이름 변수이름;

*/

//구조체 정의
struct person
{
    //이름,나이
    char name[30];
    int age;
};


int main() {

    //구조채선언
    struct person boy,girl;

    //멘버 접근연 산자(.)
    //boy,girl 의연산자를
    strcpy(boy.name,"김범석");
    strcpy(girl.name,"김범석");

    //boy,girl의 age(나이)
    boy.age = 20;
    girl.age = 10;

    //출력

    printf("boy 이름%s, 나이%d\n", boy.name, boy.age);
    printf("girl 이름%s, 나이%d\n", girl.name, girl.age);
    printf("over");


return 0;

}