#include <stdio.h>

/*
    EOF(END of File)
    :�ý�ó�����ǳ�

    getchar()�Է��Լ��� eof ��ȯ
    1.�Լ�ȣ�����:�Ͼ� �鸱 �����Ͱ� ���� ��
    2 ��Ʈ�� + (z or  c)  = ����

*/

int main() {

    int ch;
while(1){

    ch = getchar();

    if (ch == EOF)
    {
        break;
    }
    

    putchar(ch);

    }



    printf("over");
return 0;

}