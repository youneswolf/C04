#include <stdio.h>
int	ft_recursive_factorial(int nb){
  int sum =1;
  if(nb != 1){
  return nb*ft_recursive_factorial(nb - 1);
  }
}

int main (void)
{
printf("%d",ft_recursive_factorial(4));
}
