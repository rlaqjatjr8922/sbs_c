#include <stdio.h>

int main() {
 

        int N;
        char S[10];
        printf("����:");
        scanf("%d",&N);

        //break;�������� �����ڵ嵵����

        switch(N){
        case 100:
        case 90:
            printf("A");
            break;
        case 80:
        case 70:
        printf("B");
            break;
         case 60:
         case 50:
            printf("C");
            break;

        default:
        printf("����"); 
        break;


        printf("�ֹ�  �Ӵϴ�");




    } 

return 0;

}