#include <stdio.h>
#include <stdlib.h>

char * get(){

    char * str = (char*) malloc( sizeof (char) *100);
    printf("�����Է�");
    gets(str);
    return str;
}

int main(){

    char* result = get();
    printf("���� %s\n",result);

    if (result != NULL)
    {
        free(result);
    }
    
return 0;
}
