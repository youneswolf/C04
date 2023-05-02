#include <stdio.h>
int	ft_iterative_factorial(int nb){
    int sum=1;
    while(nb!=1){
    sum=sum*nb;
    nb--;
    }
   return sum; 
}

int main (void)
{
printf("%d",ft_iterative_factorial(4));
}
