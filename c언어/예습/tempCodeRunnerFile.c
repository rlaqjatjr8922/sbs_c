#include <stdio.h>
#include <stdlib.h>

int main(){

    //할당된 메모라갑주소
    char *ptr;
    //입력 대이터갰수
    int co = 0;
    //할당바든매노리크기
    int ma = 3;
    char num;



ptr = (char*) calloc(ma , sizeof(char) );

while (1)
{
    printf("정수:");
    scanf("%s",&num);
    if (num == "0")
    {
        break;
    }


    //매모리갑이 초과됀경우, 재할당영역 확장
    if (co == ma)
    {
        ma += ma; // 3 + 3, 매모리싸이즈두배 
        //매모리재할당
        ptr = (char*) realloc(ptr, ma * sizeof(char)  );
    }

    //입력한갑을저장
    ptr[co++] = num;
    
}

for (int i = 0; i < co; i++)
{
    printf("%s " , ptr[i]);
}
printf("\n");

if( ptr != NULL){
    // 메모리공간 해재
    free(ptr);
}

  
return 0;
}
