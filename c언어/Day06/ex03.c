#include <stdio.h>

int main() {

 // 문자열 변수포함
 // - 배열의 문자열 저장
 // '' : 한문자
 // "" : 어러문자

 char greet[10] = "Heello,c" ;
printf ("내용 : %s\n",greet);
printf ("저잔공간:%d \n",sizeof(greet));


// sizeof()  :저장공간

// 널문자
// \0  : 문자열끗에 만들어지는 의미없는글자

char mi [30] = "I Love ";
printf ("%s\n", mi);

mi[2] = '\0';
printf ("%s\n", mi);



    
    printf("over");
return 0;

}