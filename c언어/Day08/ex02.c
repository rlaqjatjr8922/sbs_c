#include <stdio.h>
/*
   ������ &�迭
    -�迭���̸� : ù������ּҰ�
    -int arr[3];
    -�迭����
    -1. �δ콺:arr[a]
    -2.��������:*(arr + a)


*/


int main() {
    int arr[3] = {1,2,3};
    char q[3][3] = {{"1","2","3"},{"4","5","6"}};
    //�δ콺
    printf("%d  %d  %d\n",arr[1],arr[2],arr[0]);
    // ������
    printf("%d  %d  %d  ",*(arr+1),*(arr+2),*(arr+0));
return 0;

}