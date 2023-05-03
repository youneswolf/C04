#include <stdio.h>

int	ft_is_prime(int nb){
    int a,m;
    a=2;
    m=nb/2;
    while(a<m){
       if(nb%a!=0){
           return 1;
       }
       a++;
       
    }
    return 0;
}

int main(){
    printf("%d",ft_is_prime(10));
}
