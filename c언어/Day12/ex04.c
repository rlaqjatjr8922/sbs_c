#include <stdio.h>


int number = 0;

void pr (void){
    printf("(pr)���� ���� number �� %d\n",number);
}

int main(void) {
    //��������
    int number = 200;
    printf("(main)���� ���� number �� %d\n",number);

    if (number > 10)
    {
        int number = 300;
        printf("(���ǹ�)���� ���� number �� %d\n",number);
    }
    

    //�Լ�ȣ��
    pr();

    printf("over");
return 0;

}