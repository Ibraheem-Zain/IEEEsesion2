# include <stdio.h>

void perfect_checker (int num);

int main (){

    int num;
    printf ("enter a number:\n");
    scanf ("%d",&num);
    perfect_checker(num);

}
void perfect_checker (int num){
    int res = 0;
    for (int i = 1; i < num; ++i){
        if (num % i == 0){          
           res = res + i;
        }
    }
    if (res == num){
        printf ("%d is a perfect number.\n",num);
    }
    else {
        printf ("%d is NOT a perfect number.\n",num);
    }
}