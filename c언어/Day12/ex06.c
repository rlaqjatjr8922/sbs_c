#include <stdio.h>
#include <stdlib.h>

char * get(){

    char * str = (char*) malloc( sizeof (char) *100);
    printf("색갈입력");
    gets(str);
    return str;
}

int main(){

    char* result = get();
    printf("색갈 %s\n",result);

    if (result != NULL)
    {
        free(result);
    }
    
return 0;
}
