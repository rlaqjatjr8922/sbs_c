#include <stdio.h>

int main() {

 // ���ڿ� ��������
 // - �迭�� ���ڿ� ����
 // '' : �ѹ���
 // "" : �����

 char greet[10] = "Heello,c" ;
printf ("���� : %s\n",greet);
printf ("���ܰ���:%d \n",sizeof(greet));


// sizeof()  :�������

// �ι���
// \0  : ���ڿ����� ��������� �ǹ̾��±���

char mi [30] = "I Love ";
printf ("%s\n", mi);

mi[2] = '\0';
printf ("%s\n", mi);



    
    printf("over");
return 0;

}