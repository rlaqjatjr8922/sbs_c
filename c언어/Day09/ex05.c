#include <stdio.h>
#include <string.h>
/*
    ���ڿ��� ó�� �Լ�
    :���ڿ��� ����, ����/����/�񱳵��Ǳ��

    string.h �ش����Ͽ����ǉ� 

    *����
    strlen(���ڿ�)              :���ڿ�����
    strcpy(str1,str2)           :str2 �� str1 ������
    strncpy(str1,str2,count)    :str2 �� str1�� count ������ŭ ����

    strcat(str1,str2)            :str2 �� str1 �ڿ�����
    strncat(str1,str2)           :str2 �� str1 �ڿ� count ������ŭ ����

    strcpy(str1,str2)           :���Ͽ� ��Ʈ�� 0 �ƴϸ� 0�̾ƴ԰� ���
    strncpy(str1,str2,count)           :�վּ� ount ��ŭ �� ���Ͽ� ��Ʈ�� 0 �ƴϸ� 0�̾ƴ԰� ���
*/
int main() {

    char str1[50] = "appie in good";
    char str2[50] = "berry is good";
    char str3[50] ;

    //�� ������ ����
    printf("str1 �Ǳ���: %d \n",strlen(str1));
    printf("str2 �Ǳ���: %d \n",strlen(str2));

    //str1�� str3������
    strcpy(str3,str1);
    //str1�� str2�� �ټ����ڸ� ����
    strncpy(str1,str2,5);

    printf("str1 : %s \n",str1);
    printf("str2 : %s \n",str2);
    printf("str3 : %s \n",str3);

    printf("over");
return 0;

}