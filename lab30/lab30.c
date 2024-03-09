# include <stdio.h>

int prime_checher (int num);

int main (){
    int num;
    printf ("enter a number:\n");
    scanf ("%d",&num);
    int res = prime_checher (num);

    if (res != 0){
        printf ("%d is a prime number.\n",num);
    } 
    else {
        printf ("%d is not a prime number.\n",num);
    }
}
int prime_checher (int num){
   for (int i = 2; i < num; ++i){
     if (num % i == 0){
        return 0;
     }
   }
   return 1;
}