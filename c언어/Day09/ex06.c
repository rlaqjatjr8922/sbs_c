#include <stdio.h>
#include <string.h>
int main() {

    char str1[50] = "새해 복";
    char str2[50] = "새해 복";

    //str 문자"에바드새요"연결
    strcat(str1,"바드새요");
    printf("%s\n",str1);

    //str1 4글자만연결 (8byte)
    strncat(str2,"바드새요 연휴",8);
    printf("%s\n",str2);
    //str1 과 str2 비교

    printf("1:%d\n",strcmp(str1,str2) );
    printf("1:%d\n",strcmp(str1,"안녕하새요") );

return 0;

}