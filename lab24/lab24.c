# include <stdio.h>

int main (){
    int i,j,k,rows,num=1;
    printf ("enter the rows\n");
    scanf ("%i",&rows);
    for (i = 1; i <= rows; i++){
        for (k = (rows-1); k >= i; k--){
            printf (" ");
        }
        for (j = 1; j <= i; j++){
            printf ("%d ",num);
            ++num;
        }
        printf ("\n");
    }
}