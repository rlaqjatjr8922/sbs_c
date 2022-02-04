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
    //구조변수초기화
    //맴버순서대로 {} 안에 값을대입
    struct person boy = {"김범석",20};
    struct person girl = {"이코딩",10};
    //출력

    printf("boy 이름%s, 나이%d\n",boy.name,boy.age);
    printf("girl 이름%s, 나이%d\n",girl.name,girl.age);
    printf("over");


return 0;

}