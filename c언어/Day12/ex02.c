#include <stdio.h>

//��ȯ��x ,�Ű�����x
void func1(void){
     printf("��ȯ��x ,�Ű�����x\n");

}

//��ȯ��o ,�Ű�����x
int func2(void){
printf("��ȯ��o ,�Ű�����x\n");
return 100;
}

//��ȯ��x ,�Ű�����o
void func3(int a ,int b){
printf("��ȯ��x ,�Ű�����o\n");
printf("a + d = %d\n",a + b);

}

//��ȯ��o ,�Ű�����o
int func4(int a ,int b){
int sum = a + b;
printf("��ȯ��o ,�Ű�����o\n");
printf("a + b =\n",a,b);
return sum;
}


void main(void) {
    //�Լ�ȣ��
    //1
    func1();

    //2
    int q1 = func2();

    //3
    func3(10,20);

    //4
    int q2 = func4(10,20);


    printf("re1:%d\n",q1);
    printf("re1:%d\n",q2);


}