#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
int	ft_find_next_prime(int nb){
    int i;
    i=nb+1;
    while(i>nb){
        if(ft_is_prime(i)){
            return i;
        }else{
        i++;
        }
    }
    
}

int main(){
    printf("%d",ft_find_next_prime(4));
}
