#include <stdio.h>

void main() {
printf ("����");
int n;
int x;
int y;
char q[10] = {'1','1','1','1','1','1','1','1','1','1',};

for (int qwe = 0; qwe < 9; qwe++)
{
    q[qwe] = 1; 
}
printf("%s",q[1]);


for (int i = 1;i <= 2; i++ ){
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
printf("%s",q[1]);
=======

>>>>>>> eb6e0156c12cdcca05342fb2a3a55b001025b189
printf ("�����Դϴ� (��ȣ:124)");



<<<<<<< HEAD
for (int qw = 0; qw < 5;qw++)
{//����
    printf("%s",q[qw]);
}

printf ("��");
=======

printf ("��");

>>>>>>> eb6e0156c12cdcca05342fb2a3a55b001025b189

return 0;

}