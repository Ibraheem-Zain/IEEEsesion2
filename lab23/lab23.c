# include <stdio.h>

int main (){
    int rows;
    int i,j,num=1;
    printf ("enter the number of rows:\n");
    scanf ("%d",&rows);
    for (i = 1; i<= rows; ++i){
        for (j=1; j<=i; ++j){                
            printf ("%d",num);
            ++num;           
        }
        printf ("\n");
    }
}