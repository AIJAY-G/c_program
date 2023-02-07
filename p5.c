#include<stdio.h>
int main()
{
  double long num;
  int p;
  scanf("%llf",&num);
  scanf("%d",&p);
  printf("%.*llf",num,p);
  return 0;
}
