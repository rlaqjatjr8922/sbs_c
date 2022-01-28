#include <stdio.h>

/*
    EOF(END of File)
    :택스처파일의끝

    getchar()입력함수가 eof 반환
    1.함수호출실패:일어 들릴 데이터가 없을 때
    2 컨트롤 + (z or  c)  = 종료

*/

int main() {

    int ch;
while(1){

    ch = getchar();

    if (ch == EOF)
    {
        break;
    }
    

    putchar(ch);

    }



    printf("over");
return 0;

}