#include <stdio.h>
#include <string.h>
/*
    문자열의 처리 함수
    :문자열의 길이, 복사/결합/비교등의기능

    string.h 해더파일에정의됌 

    *종류
    strlen(문자열)              :문자열깅이
    strcpy(str1,str2)           :str2 를 str1 에복사
    strncpy(str1,str2,count)    :str2 를 str1에 count 개수만큼 복사

    strcat(str1,str2)            :str2 를 str1 뒤에연결
    strncat(str1,str2)           :str2 를 str1 뒤에 count 개수만큼 연결

    strcpy(str1,str2)           :비교하여 가트면 0 아니면 0이아님갑 출력
    strncpy(str1,str2,count)           :앞애서 ount 만큼 비교 비교하여 가트면 0 아니면 0이아님갑 출력
*/
int main() {

    char str1[50] = "appie in good";
    char str2[50] = "berry is good";
    char str3[50] ;

    //각 문자의 길이
    printf("str1 의길이: %d \n",strlen(str1));
    printf("str2 의길이: %d \n",strlen(str2));

    //str1을 str3에복사
    strcpy(str3,str1);
    //str1을 str2에 다섯글자만 복사
    strncpy(str1,str2,5);

    printf("str1 : %s \n",str1);
    printf("str2 : %s \n",str2);
    printf("str3 : %s \n",str3);

    printf("over");
return 0;

}