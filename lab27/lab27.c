# include <stdio.h>

int square (int num);

int main (){
  int res,num;
  printf ("enter the number\n");
  scanf ("%d",&num);
  res = square (num);
  printf ("the square of %d is: %d\n",num,res);

}
int square (int num){
    num = num * num;
    return num;
}