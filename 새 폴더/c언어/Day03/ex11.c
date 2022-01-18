#include <stdio.h>

	int main(void){	

        int num, absolute;

        printf("정수:");
        scanf("%d", &num );

        absolute = num > 0 ? num : num * -1;
        printf("절대:%d\n",absolute );


	return 0;}
