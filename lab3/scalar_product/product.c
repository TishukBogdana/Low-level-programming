#include <stdio.h>
#include <stdlib.h>
int* ar1;
int* ar2;
void err(void);
int count_sum(const int* arr1,const int*  arr2,const size_t sarr){
int sum = 0;
int i;
for(i=0;i<sarr;i++){
sum = sum + arr1[i]*arr2[i];
}
return sum;
}

int main(){
int n;
int i;
printf("Enter size of vectors\n");

if ((scanf("%i",&n)&(n>0))){
ar1 = (int*) malloc (sizeof(int)*n);
ar2 = (int*) malloc (sizeof(int)*n);
printf("Enter first vector\n");
for (i = 0; i < n; i++)
		{
			if(!scanf("%i", &ar1[i]))
			{
				err();
                                return 0;

			}
		}

printf("Enter second vector\n");

for (i = 0; i < n; i++)
		{
			if(!scanf("%i", &ar2[i]))
			{
                            err();
return 0;
			}
		}

printf("scalar product of vectors = %d\n", count_sum(ar1,ar2,n));
free(ar1);
free(ar2);
}else{
err();
}
return 0;
}


void err(void){
printf("Wrong value\n");
}
