#include <stdio.h>

void main() {
printf ("����");
int n;
int x;
int y;


for (int i = 0;i <= 100; i++ ){
    x = rand() % 100 +1;
    y = rand() % 10 +1;
    printf("%d x %d = ",x,y);
    scanf("%d",&n);
    n = (int)n;
    if((x * y) == n){
        printf("����\n");
                    }
    else{
        printf("����~~~~~~ �ѹ����\n");
        i = i - 2;
       
    }
    

}
printf ("�����Դϴ� (��ȣ:124)");

return 0;

}