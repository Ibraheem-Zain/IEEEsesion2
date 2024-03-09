# include <stdio.h>

int main (){
 int stop;
 int sum = 0;

 printf ("enter the number that you want the sum until it:\n");
 scanf ("%d",&stop);

 for (int i=1;i<=stop;++i){
    sum+=i;
 }
 printf ("the sum of the first 10 natural numbers is:%d\n",sum);
    
}