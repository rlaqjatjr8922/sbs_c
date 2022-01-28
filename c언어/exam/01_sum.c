/*
    정수를입력바다 , 1~n까지 합을구하여출력
    */
   #include <stdio.h>

int main() {

    int i;
    printf("정수");
    scanf("%d",&i);

    i = (int)i;
    int q = 0;
    for (int n = 1; i >= n; n++)
    {
        q =q+n;
      
    }

    
    printf("답:%d",q);
return 0;

}