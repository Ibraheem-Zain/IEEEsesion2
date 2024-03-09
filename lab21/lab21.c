# include <stdio.h>

int main (){
    int terms;
    printf ("enter the number of the terms:\n");
    scanf ("%d",&terms);
    for (int i= 1; i<=terms; ++i){
        printf ("the cube of the number %d is %d.\n",i,i*i*i);
    }
}