#include <stdio.h>
#include <stdlib.h>

int main(){

    //�Ҵ�� �޸���ּ�
    char *ptr;
    //�Է� �����Ͱ���
    int co = 0;
    //�Ҵ�ٵ�ų븮ũ��
    int ma = 3;
    char num;



ptr = (char*) calloc(ma , sizeof(char) );

while (1)
{
    printf("����:");
    scanf("%s",&num);
    if (num == "0")
    {
        break;
    }


    //�Ÿ𸮰��� �ʰ��°��, ���Ҵ翵�� Ȯ��
    if (co == ma)
    {
        ma += ma; // 3 + 3, �Ÿ𸮽�����ι� 
        //�Ÿ����Ҵ�
        ptr = (char*) realloc(ptr, ma * sizeof(char)  );
    }

    //�Է��Ѱ�������
    ptr[co++] = num;
    
}

for (int i = 0; i < co; i++)
{
    printf("%s " , ptr[i]);
}
printf("\n");

if( ptr != NULL){
    // �޸𸮰��� ����
    free(ptr);
}

  
return 0;
}
