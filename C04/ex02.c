#include <stdio.h>
int	ft_iterative_power(int nb, int power){
    int sum=1;
    while(power!=0){
        sum=sum*nb;
        power--;
    }
    return sum;
}

int main (void)
{
printf("%d",ft_iterative_power(5,3));
}

