#include <stdio.h>

int main() {

// 학생스를 잎력바다 각수의 성젖출력 평균점수출력

int n;
printf("학생");
scanf("%d",&n);
getchar();

int st[n];
int sum = 0;
double avg = 0.0;
for (int i = 0; i < n; i++){
    printf("성적%d:", i+1);
    scanf("%d",&st[i]);
    getchar();
    sum = sum + st[i];

}
//형변환이필요함
avg = (double)sum / n ;
printf("합개 %d\n",sum);
printf("평균%f\n",avg);









    printf("over");
return 0;

}