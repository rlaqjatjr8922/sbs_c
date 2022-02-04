#include <stdio.h>

int main() {

    int i;
    scanf("%d",&i);
    
    int qw = 0;
    

    for (int q = 0; q < i; q++)
    {
        
        for (int w = 0; w < i; w++)
        {
            qw = qw + 1;
            if ((double)q/2 == (int)q/2)
            {
                printf("%d ",qw);
            }
            else
            {
                
                printf("%d ",(qw-1+i-w*2));
            }
            
            
        }
        printf("\n");
    }
    


    
return 0;

}