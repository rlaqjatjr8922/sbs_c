#include <stdio.h>

int main() {
  //swch 
  /*   
    switch(ǥ����,����){
        case ��1:    //���=��1�϶�����
            break;
            switch(ǥ����,����){
        case ��2:    //���=��2�϶�����
            break;
            switch(ǥ����,����){
        case ��3:    //���=��3�϶�����
            break;

*/

        int N;
        char S[10];
        printf("�޴� ��ȣ:");
        scanf("%d",&N);


        switch(N){
        case 1:
                
                printf("�ƸŸ�ī��\n");
            break;
            
        case 2:   
        printf ("Ŀ��\n"); 
            break;
            
        case 3:    
        printf("���̽�Ƽ");
            break;

        default:
        printf("����"); 
        break;


        printf("�ֹ� %s �Ӵϴ�",*S);




    } 

return 0;

}