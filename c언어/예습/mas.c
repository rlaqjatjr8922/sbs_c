#include <stdio.h>

void main() {
printf ("시작");
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
        printf("정답\n");
        q[i] = ("정답  %d x %d = %d",x,y,n);
                    }
    else{
        printf("오답~~~~~~ 한문재더\n");
        i = i - 2;
       q[i] = ("      %d x %d = %d 정답=%d",x,y,n,(x*y));
    }
    

}

printf ("축하함니다 (암호:124)");




printf ("끝");


return 0;

}