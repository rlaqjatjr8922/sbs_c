#include <stdio.h>
#include <string.h>

	int main(void){	
            char phone[10] = "Samsung";
    
    printf("스마트폰 이름 : %s \n" ,phone);

    strcpy (phone , "IPhone 12");
    printf("스마트폰 이름 : %s \n" ,phone);

	return 0;
    }
