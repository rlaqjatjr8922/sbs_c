#include <stdio.h>

	int main(void){	

        int num, absolute;

        printf("����:");
        scanf("%d", &num );

        absolute = num > 0 ? num : num * -1;
        printf("����:%d\n",absolute );


	return 0;}
