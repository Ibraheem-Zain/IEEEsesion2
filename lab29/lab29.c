# include <stdio.h>

void con_to_binary (int num);

int main (){
     int num;
     printf ("enter a number:\n");
     scanf ("%d",&num);
     con_to_binary (num);
}

void con_to_binary (int num){
    if (num < 0){
       num = num * -1;
       printf ("your number in binary is: -");
    }
    else {
       printf ("your number in binary is: ");
    }
    
    for (int i = num; i > 0; i = num){

        if ( num % 2 == 0){
            printf ("0");
        }
        else {
            printf ("1");
        }

        num = num / 2;
        
    }
    printf ("\n");
}