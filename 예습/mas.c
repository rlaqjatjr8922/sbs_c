#include <stdio.h>
#include <stdlib.h>

void main() {
printf ("����");
int n;
int x;
int y;
for (int i = 0;i <= 100; i++ ){
    printf("%d",i);
    x = rand() % 100 +1;
    y = rand() % 10 + 1;
    printf("%d x %d = ",x,y);
    scanf("%d",&n);
    n = (int)n;
    if((x * y) == n){
        printf("����");
                    }
    else{
        printf("����~~~~~~ �ѹ����");
        i = i - 2;
    }
    
printf("%d",i);
}
printf ("��");
return 0;

}