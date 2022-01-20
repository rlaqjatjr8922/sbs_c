#include <stdio.h>

int main(void) {
    int num = 0;
    for(int i = 1; i <= 20; i++){

        if( i % 2 == 1){
        continue;   }

        num += i;

        printf("%d", i);
        if (i != 20)
            printf(" + ");
        
            /* code */
        
        
    }
    printf("=%d\n", num);






    printf("hello c~!");
return 0;

}