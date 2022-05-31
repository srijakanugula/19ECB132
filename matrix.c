#include<stdio.h>
int main()
{int i,j,a,b;
  int matrix[20][20];
  printf("how many rows do you want:");
  scanf("%d", &a);
  printf("how many columns do you want:");
  scanf("%d", &b);
  for(i=0;i<a;i++)
    {for(j=0;j<b;j++)
      {printf("enter elements in [%d][%d]:",i,j);
        scanf("%d",&matrix[i][j]);}}
  for(i=0;i<a;i++)
    {for(j=0;j<b;j++)
      {printf("%d\t",matrix[i][j]);}
  printf("\n");}
  return 0;
  }
*/
how many rows do you want:4
how many columns do you want:5
enter elements in [0][0]:2 5
enter elements in [0][1]:enter elements in [0][2]:86
enter elements in [0][3]:7 9 
enter elements in [0][4]:enter elements in [1][0]: 6 3 
enter elements in [1][1]:enter elements in [1][2]:3 5
enter elements in [1][3]:enter elements in [1][4]:33
enter elements in [2][0]:32
enter elements in [2][1]:9 0
enter elements in [2][2]:enter elements in [2][3]: 2 4
enter elements in [2][4]:enter elements in [3][0]:1 2
enter elements in [3][1]:enter elements in [3][2]:1 1
enter elements in [3][3]:enter elements in [3][4]:5 6 
2   5   86  7   9
6   3   3   5   33
32  9   0   2   4
1   2   1   1   5
  /*