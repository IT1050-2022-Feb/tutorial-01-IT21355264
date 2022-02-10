/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main()
{
   //define the variabals
  int i,n,sum;
    //geting user inputs 
  printf("Enter the value to n:-");
  scanf("%d",&n);
// calculation
  for(i=1;i<=n;i++)
    {
      sum+=i;
      
    }
  // print the sum
  printf("Sum=\t%d",sum);
  return 0;
}

