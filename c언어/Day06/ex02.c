#include <stdio.h>

int main() {

// �л����� �ٷ¹ٴ� ������ ������� ����������

int n;
printf("�л�");
scanf("%d",&n);
getchar();

int st[n];
int sum = 0;
double avg = 0.0;
for (int i = 0; i < n; i++){
    printf("����%d:", i+1);
    scanf("%d",&st[i]);
    getchar();
    sum = sum + st[i];

}
//����ȯ���ʿ���
avg = (double)sum / n ;
printf("�հ� %d\n",sum);
printf("���%f\n",avg);









    printf("over");
return 0;

}