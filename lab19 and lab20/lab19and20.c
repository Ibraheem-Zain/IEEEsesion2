# include <stdio.h>

int main (){
    int terms;
    printf ("How many numbers you want to get the sum for?\n");
    scanf ("%d",&terms);

    int val_of_term;
    int sum=0;
    float i;
    for (i = 1; i <= terms; ++i){
         printf("%.0f - ",i);
         scanf ("%i",&val_of_term);
         sum += val_of_term;
    }
    printf ("the sum equals :%i\n",sum);
    printf ("the avarage equals:%.2f\n",(sum/--i));
}