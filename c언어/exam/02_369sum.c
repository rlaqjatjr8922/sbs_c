/*
    정수 1부터 100가지 반복추력 하면서
    갑이 3,6,9 인경우 ,그 개수만큼 * 을 출력

   
     
    */


   #include <stdio.h>

int main() {

for ( int i = 1; i <= 100; i++)
{
    int s = i % 10;
    int a = i / 10;

    if(s % 3 == 0){
    printf("*");
        if(i % 30 == 0){
        printf("*\n");
        }
        else{ 
            printf("\n");
            }
        }
    else{
        printf("%d\n",i);
    }

    }

    

    
return 0;

}





