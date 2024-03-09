# include <stdio.h>

int check (int num);

int main (){

    int num;
    printf ("enter a number\n");
    scanf ("%d",&num);

    int res = check (num);

    if ( res == 0){
        printf ("the entered number is even.\n");
    }
    else {
        printf ("the entered number is odd.\n");
    }
}

int check (int num){
    int O_or_1 = num & ~(1 << 0);
    if (O_or_1 == num){
        return 0;
    }
    else {
        return 1;
    }
}