#include <stdio.h>

int main() {
    //�ִ����� , ����� , �ּҰ���� ���ϱ�
    //�� ���� �Է�
    int A,B;
    int big, small;
    int gcd, lcm;
    int R;
    printf("���� a ,b:");
    scanf("%d %d" , &A , &B);
    //�μ���ũ���
    if( A >= B){
        big = A;
        small = B;}

        else
        {big = B;
        small = A;}

        while (1)
        {
            R = big % small;
            big = small;
            small = R;
            if (R == 0){
                gcd = big;
                lcm = A * B / gcd;
                break;
            }
            
            }
        printf("�ִ�: %d\n",gcd);
        printf("�ּ�:%d\n",lcm);
        
        
        







    printf("��");
return 0;

}