#include <stdio.h>

void main() {
printf ("시작");
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
        printf("정답\n");
        q[i] = ("정답  %d x %d = %d",x,y,n);
                    }
    else{
        printf("오답~~~~~~ 한문재더\n");
        i = i - 2;
       q[i] = ("      %d x %d = %d 정답=%d",x,y,n,(x*y));
    }
    

}
<<<<<<< HEAD
printf("%s",q[1]);
=======

>>>>>>> eb6e0156c12cdcca05342fb2a3a55b001025b189
printf ("축하함니다 (암호:124)");



<<<<<<< HEAD
for (int qw = 0; qw < 5;qw++)
{//수정
    printf("%s",q[qw]);
}

printf ("끝");
=======

printf ("끝");

>>>>>>> eb6e0156c12cdcca05342fb2a3a55b001025b189

return 0;

}