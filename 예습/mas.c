#include <stdio.h>
#include <stdlib.h>

int main(void) {
printf ("시작");
int n;
int x;
int y;
for (int i = 0;i <= 100; i++ ){
    x = rand() % 100 +1;
    y = rend() % 10 + 1;
    printf("%d x %d = ",x,y);
    scanf("%d",&n);
    n = (int)n;
    if((x * y) == n){
        printf("정답");
                    }
    else{
        printf("오답~~~~~~ 한문재더");
        i = i + 2;
    }
    
printf("%d",i);
}
printf ("끝");
return 0;

}