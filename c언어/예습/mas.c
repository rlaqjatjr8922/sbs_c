#include <stdio.h>
#include <stdlib.h>

void main() {
printf ("����");
int n;
int x;
int y;
char q[1000];

for (int i = 0;i <= 5; i++ ){
    x = rand() % 100 +1;
    y = rand() % 10 +1;
    printf("%d x %d = ",x,y);
    scanf("%d",&n);
    n = (int)n;
    if((x * y) == n){
        printf("����\n");
        q[i] = ("����  %d x %d = %d",x,y,n);
                    }
    else{
        printf("����~~~~~~ �ѹ����\n");
        i = i - 2;
       q[i] = ("      %d x %d = %d ����=%d",x,y,n,(x*y));
    }
    

}


for (int i = 0; i < 1000;i++)
{//����
    printf(" ");
}

printf ("��");

return 0;

}