#include <stdio.h>
#include <string.h>
int main() {

    char str1[50] = "���� ��";
    char str2[50] = "���� ��";

    //str ����"���ٵ����"����
    strcat(str1,"�ٵ����");
    printf("%s\n",str1);

    //str1 4���ڸ����� (8byte)
    strncat(str2,"�ٵ���� ����",8);
    printf("%s\n",str2);
    //str1 �� str2 ��

    printf("1:%d\n",strcmp(str1,str2) );
    printf("1:%d\n",strcmp(str1,"�ȳ��ϻ���") );

return 0;

}