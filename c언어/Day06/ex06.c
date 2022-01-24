#include <stdio.h>

int main() {


    int m , n;
    printf("m :  ");    
    scanf("%d", &m);
    getchar();

    printf("n :  ");    
    scanf("%d", &n);
    getchar();

    int a[m][n];


 for (int i = 0; i < m; i++){
        for (int u = 0; u < n; u++){
            printf("ют╥б%d, %d :",i,u);
            scanf("%d" , &a[i][u]);
            getchar();
            
            /* code */
        }
        
        /* code */
    }



    for (int i = 0; i < m; i++){
        for (int u = 0; u < n; u++){
            printf ("%d\n",a[i][u]);

            /* code */
        }
        
        printf("\n");
    }


   
    



    printf("over");
return 0;

}