#include<stdio.h>
int main()

{
    int n=12;
    while(n>1)
    {
        if(n%2==0)
        {
        n+n/2;
        printf("%d\n",n);
    }
  }
  return 0;
}