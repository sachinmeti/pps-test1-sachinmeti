#include<stdio.h>
int input()
{
  int a;
  scanf("%d",&a);
  return a;

}


int compute(int a, int b,int c)
{
  
  if(a>b && a>c)
  return a;
  else 
  if(b>c && b>a)
  return b;
  else 
  return c;
 }

int output(int a, int b, int c, int large)
{
  printf("%d is the greatest number\n",large);
  return 0;


}
 int main()
 {
   int a,b,c,l;
   printf("enter the number\n");
   a = input();
   b = input();
   c = input();
  l= compute(a,b,c);
  output(a, b ,c ,l);
  return 0;
 }
