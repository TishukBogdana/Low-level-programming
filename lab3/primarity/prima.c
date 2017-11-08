#include <stdio.h>
 int is_prime(unsigned long x){
int i;
if((x==0UL)|(x==1UL)) return 0;
if(x<4UL) return 1;
if (x % 2UL !=0UL){
for(i=3;i<x/2UL;i=i+2){
if (x%i==0){
return 0;
}
}
}else {return 0;}
return 1;
}

int main(){
 unsigned long n = 0UL;
 int k;
   scanf( "%lu", &n ) ;
   k = is_prime(n);
  if (k) printf("%lu yes", n);
  else printf("%lu no", n);

    return 0;
}
