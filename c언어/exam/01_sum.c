/*
    �������Է¹ٴ� , 1~n���� �������Ͽ����
    */
   #include <stdio.h>

int main() {

    int i;
    printf("����");
    scanf("%d",&i);

    i = (int)i;
    int q = 0;
    for (int n = 1; i >= n; n++)
    {
        q =q+n;
      
    }

    
    printf("��:%d",q);
return 0;

}