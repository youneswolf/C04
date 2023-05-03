#include <stdio.h>

int	ft_sqrt(int nb)
{
int s;
s=1;
while(s){
  if(s*s==nb){
      return s;
  }else{
      s++;
  }  
}


}
int main()
{
    printf("%d",ft_sqrt(9));

    return 0;
}
