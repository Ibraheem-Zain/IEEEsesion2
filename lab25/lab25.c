# include <stdio.h>

int main (){
    int terms;
    float sum = 1.0;
    printf ("enter the number of terms: \n");
    scanf ("%d",&terms);
    printf ("1");
    for (float i = 2;i <= terms; ++i ){
        printf (" + 1/%.0f",i);
        sum = sum + (1/i);
    }
    printf ("\nthe sum equals = %f\n",sum);
    return 0;
}