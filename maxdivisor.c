#include <stdio.h>
int mdc(int a, int b, int c)
  {
    int da=a%c;
    int db=b%c;
    if (da==db)
    {
    c = c+1;
    int mdc(int a, int b,int c);
    }
    else 
    {
      return c;
    }
    
  }

int main(void) 
{
  int a,b,c;
  scanf("%d",&a);
  scanf("%d",&b);
  c = 2;
  printf("%d", mdc(a,b,c));
  }
  



