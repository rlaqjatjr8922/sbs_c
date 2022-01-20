#include <stdio.h>

int main() {

    //for은 아무것도안스면무한반복
    int n = 1;

    for( ; ; )
    {
         if( n == 30 )
        break;
        printf(" n : %d\n", n);
       n++;
       

    }




    printf("hello c~!");
return 0;

}