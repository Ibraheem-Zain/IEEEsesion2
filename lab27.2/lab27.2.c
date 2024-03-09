# include <stdio.h>

void square1(int num);

int main (){
  int res,num;
  printf ("enter the number\n");
  scanf ("%d",&num);
  square1 (num);

}
void square1 (int num){
    num = num * num;
    printf ("the square is: %d\n",num);
}