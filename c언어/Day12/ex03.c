#include <stdio.h>

int q[5];

int max(int* q){

int a = 0;
for (int i = 0; i < 5; i++)
{
    if ( a  < q[i])
    {
       a = q[i];
       //printf("%d",a);
       }
    
   
}

return a;
}

int min(int* q,int e){

int a = e;
for (int i = 0; i < 5; i++)
{
    if ( a  > q[i])
    {
       a = q[i];
       //printf("%d",a);
       }
    
   
}

return a;
}


int main() {

    

    for (int i = 0; i < 5; i++)
    {
        printf("Á¤¼öÀÔ·Â\n");
        scanf("%d", &q[i]);
        
    }
    int e = max(q);

    printf("¬‚´ë°©:%d",e);

    int a = min(q,e);

printf("¬‚¼Ò°©:%d",a);
    



    
return 0;

}