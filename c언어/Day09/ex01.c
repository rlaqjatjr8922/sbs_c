#include <stdio.h>

    //  \0 로 문자의 끝지정
    //
    //   _문자열선언
    //  1.배열 기반
    //      char greet[] = "hello";
    //         -한글자 한글자 병경가능
    //         -새로운 문자열 할당불가

    //  2.포인터선언
    //     char * greet = "Hello"
    //      -한글자 한글자 병경불가
    //      -새로운 문자열 할당가능
    //  
    //  


int main() {

    char st1[] = "Hello C ~!";//  1.배열 기반
    char *st2 = "Hello C ~!";//  2.포인터선언
    
    
    printf("배열 기반:%s\n",st1);

    printf("포인터선언:%s\n\n\n",st2);
     
    st1[6] = 'a';   //한글자 한글자 병경가능
    //st1 = "dddddd";  새로운 문자열 할당불가

    //st2[6] = 'a'; //-한글자 한글자 병경불가
    st2 = "apple";   //      -새로운 문자열 할당가능

       
    printf("배열 기반:%s\n",st1);

    printf("포인터선언:%s",st2);

return 0;

}