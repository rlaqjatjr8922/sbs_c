#include <stdio.h>
//�迭 
// :���� �ڷ����� ���º���
// ex)���� :int a = 10;
/*
    ex) :int a1 = 100;

        �迭 : int arr[5] = {10,20,30,40,50}
            char str[10] = "�ȳ�"


            �迭����  : �ڷ��� ������ [�迭����];
            �迭��� : �迭�������ϴ� �����ǰ�
            �迭���� :���Ұ���
            �迭������� : ������ȣ(index)
                index �� 0���ͽ����Ѵ�
                ex)30 -->arr[2]
*/

    
int main() {
    //�հ�����ձ��ϱ�
    int sum = 0;
    
    int q[10]; 

    for (int i = 0; i < 10; i++){
        scanf("%d",&q[i]);
    }

    

    for ( int i = 0; i < 10; i++)
    {
        sum += q[i];
       
    }
     printf("�հ�%d\n",sum);
    double g = 0.0;
    g = (double) sum / 10;
    printf("���:%f",g);


    
return 0;

}