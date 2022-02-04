#include <stdio.h>
#include <string.h>

/*
    구조채 배열

    배열의 요소가 구조채인 배열

*/






//구조체 정의
struct person
{
    //이름,나이
    char name[30];
    int age;
};


int main() {


    //구조채 배영 선언
    struct person boy[3] = {
        {"김코딩",12},
        {"박코딩",14},
        {"문코딩",16}

    };

    struct person girl[3];
    strcpy(girl[0].name,"이코딩",10);
    strcpy(girl[1].name,"이코딩",20);
    strcpy(girl[2].name,"이코딩",30);

    for (int i = 0; i < 3; i++)
    {
        printf("boy 이름%s, 나이%d\n",boy[i].name,boy[i].age);
        printf("girl 이름%s, 나이%d\n",girl[i].name,girl[i].age);
        printf("\n");
    }
    

    //출력


    printf("over");


return 0;

}