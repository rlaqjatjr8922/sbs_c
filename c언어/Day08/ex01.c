#include <stdio.h>
//배열 
// :같은 자료형을 갖는변수
// ex)변수 :int a = 10;
/*
    ex) :int a1 = 100;

        배열 : int arr[5] = {10,20,30,40,50}
            char str[10] = "안녕"


            배열성언  : 자료형 변수명 [배열깅이];
            배열요소 : 배열을구성하는 각각의값
            배열길이 :오소갰수
            배열요소접근 : 순서번호(index)
                index 는 0부터시작한다
                ex)30 -->arr[2]
*/

    
int main() {
    //합개밌평균구하기
    int sum = 0;
    
    int q[10]; 

    for (int i = 0; i < 10; i++){
        scanf("%d",&q[i]);
    }

    

    for ( int i = 0; i < 10; i++)
    {
        sum += q[i];
       
    }
     printf("합개%d\n",sum);
    double g = 0.0;
    g = (double) sum / 10;
    printf("평균:%f",g);


    
return 0;

}