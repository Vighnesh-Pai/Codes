#include "stdio.h"
int main()
{
  int n,bit=1,byte=0,nibble=0;
  long long int t;

  scanf("%lld",&t);
  for(int i=1;i<=t;i++)
  {
    scanf("%d",&n);

    if(n>16)
    {
      bit=bit+2*(n/16);
      byte=byte-2*(n/16);
      if(n%16>=8)
      {
        byte=byte+(n%16)/8;
        nibble=nibble-(n%16)/8;
      if((n%16)%8>=2)
      {
        nibble=nibble+((n%16)%8)/2;
        bit=bit-((n%16)%8)/2;
      }
    }
  }
    if(n>8 && n<16)
    {
      byte=byte+(n/8);
      nibble=nibble-(n/8);
      if(n%8>=2)
      {
        nibble=nibble+(n%8)/2;
        bit=bit-(n%8)/2;
      }
}
    if(n>2 && n<8)
    {
      nibble=nibble+(n/2);
      bit=bit-(n/2);
    }
printf("%d %d %d",bit,nibble,byte);
}
return 0;
}
