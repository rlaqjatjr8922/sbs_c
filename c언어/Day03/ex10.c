#include <stdio.h>

	int main(void){	

    int num1 = 20, num2 = 10;
    int resul;

    resul = 1 && 1;
    printf("result 1 : %d\n" ,resul);


    resul = num1 == 20 && num2 == 10 ;
    printf("result 2 : %d\n" ,resul);


    resul = num1 == 20 && num2 == 100 ;
    printf("resut 3 : %d \n",resul);

	return 0;}s