#include <stdio.h>
#include <stdlib.h>

int main(){

    //�Ҵ�� �޸���ּ�
    char *ptr;
    //�Է� �����Ͱ���
    int co = 0;
    //�Ҵ�ٵ�ų븮ũ��
    int ma = 3;
    int num;

    //�Ÿ𸮵����״�
    //calloc()�Լ�
    //calloc(����,ũ��)

    // �Ҵ�ٵ�Ÿ𸮰����ǰ���,������ũ��(byte)
    // �ּҰ���ȯ(*void)
    //
ptr = (char*) calloc(ma , sizeof(char) );

while (1)
{
    printf("����:");
    gets(ptr[1][4]);
    


    //�Ÿ𸮰��� �ʰ��°��, ���Ҵ翵�� Ȯ��
    if (co == ma)
    {
        ma += ma; // 3 + 3, �Ÿ𸮽�����ι� 
        //�Ÿ����Ҵ�
        ptr = (int*) realloc(ptr, ma * sizeof(int)  );
    }

    //�Է��Ѱ�������
    ptr[co++] = num;
    
}

for (int i = 0; i < co; i++)
{
    printf("%d " , ptr[i]);
}
printf("\n");

if( ptr != NULL){
    // �޸𸮰��� ����
    free(ptr);
}

  
return 0;
}
