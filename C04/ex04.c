#include <stdio.h>
int	ft_fibonacci(int index)
{
	int	res;

	res = 0;
	if (index < 0)
		return (-1);
	else if (index < 2)
		return (index);
	else return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);

}
int main()
{
    printf("%d",ft_fibonacci(8));

    return 0;
}

