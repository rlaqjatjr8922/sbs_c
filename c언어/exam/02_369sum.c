/*
    ���� 1���� 100���� �ݺ��߷� �ϸ鼭
    ���� 3,6,9 �ΰ�� ,�� ������ŭ * �� ���

   
     
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





