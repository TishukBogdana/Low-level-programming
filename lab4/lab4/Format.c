#include <stdio.h>
#include "node.h"
#include "list.h"

#define bool int
#define true 1
#define false 0

void output(item  * const first,const int index){
item* smb = (item*) list_node_at( first, index);
int n;
if(smb == NULL){
printf("wrong index\n");
}else{
n = smb->num;
printf("Value: %d\n", n);}
}

void output_space(const int n){
printf("%d ",n);
}

void output_line(const int n){
printf("\n%d", n);
}

int sqare(const int n){
return n*n;
}

int cube(const int n){
return n*n*n;
}

int min(const int n, const int a){
if (n < a ) {return n;}
else {return a;}
}

int max(const int n,const int a){
if (n > a ) return n;
else return a;
}


int abs(const int n){
if(n<0) return -n;
else return n;
}

int power(const int n){
return n*2;
}

int summ(const int a,const int b){
return b+a;}

bool save(item * const first, const char* const file){
int ind=0;
FILE *  f = fopen(file,"w");
item* iter = first;
if(f!=NULL){
while(iter){
ind =fprintf(f, "%d ", iter->num);
iter = iter->next;
}
}
fclose(f);
if(ind){return true; }
return false;
}

bool load(item const * const point, char const * const file){
FILE * f= fopen(file, "r");
int n, ind;
if(f!=NULL){
do{
ind = fscanf(f,"%i", &n);
if (!ind){return false ;}
if(ind == EOF){return true;}
list_add_back(n, (item** )&point);
}while(ind!=EOF);
fclose(f);
return true;
}
return false;
}

bool serialize(item const * const point,char const * const file){
const item * iter =point;
FILE * f = fopen(file, "w");

if(f!=NULL){

int n;
while(iter){
n = iter->num;
fwrite(&n, sizeof(int), 1, f );
iter= iter->next;
}
fclose(f);
return true;
}
return false;
}

bool deserialize(item const * const point,char const * const file){
FILE * f = fopen(file, "r");
if(f!=NULL){
int n, ind;
while(1){
ind =fread(&n, sizeof(int), 1, f );
if(ind ==0) return true;
list_add_back(n, (item ** )&point);
}
fclose(f);
return true;
}
return false;
}

