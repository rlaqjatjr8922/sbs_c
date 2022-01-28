#include <stdio.h>

//반환값x ,매개변수x
void func1(void){
     printf("반환값x ,매개변수x\n");

}

//반환값o ,매개변수x
int func2(void){
printf("반환값o ,매개변수x\n");
return 100;
}

//반환값x ,매개변수o
void func3(int a ,int b){
printf("반환값x ,매개변수o\n");
printf("a + d = %d\n",a + b);

}

//반환값o ,매개변수o
int func4(int a ,int b){
int sum = a + b;
printf("반환값o ,매개변수o\n");
printf("a + b =\n",a,b);
return sum;
}


void main(void) {
    //함수호출
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