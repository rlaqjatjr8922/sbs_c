#include <stdio.h>

void main() {
printf ("����");
int n;
int x;
int y;
char q[1000];

for (int i = 0;i <= 100; i++ ){
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
<<<<<<< HEAD
printf ("�����Դϴ� (��ȣ:124)");
=======


for (int i = 0; i < 1000;i++)
{//����
    printf(" ");
}

printf ("��");
>>>>>>> 4c6d130a8ec34612714a422d3d426f7f6cbff80f

return 0;

}