#include <stdio.h>
#include "node.h"
#include "High_ord.h"
#include "Format.h"
#include "list.h"

int main(void){
int n;
item* first=NULL;
int ind=1;
printf("assignment page 197\n Enter numbers \n");
while(ind!=EOF){
ind=scanf("%i", &n);
if(ind){
list_add_front(n, &first);}
else{printf("Error");
return 0;}

printf("enter index \n");
scanf("%i", &n);
output (first, n);
list_free(&first);
return 0;}
return 0;}
/*printf("Higher-order function implemention\n Enter new numbers\n");
first=NULL;
while (scanf("%i", &n)!=EOF){
list_add_back(n, &first);
}
foreach(first, output_space);
foreach(first, output_line);
printf("\n Sqares: \n");
foreach(map (sqare, first), output_space);
printf("\n Cubes: \n");
foreach(map (cube, first), output_space);
printf("\n Sum \n");
printf("%i", foldl(0, summ,first));
printf("\n Min \n");
printf("%d", foldl(list_get(0,&first), min,first));
printf("\n Max \n");
printf("%d", foldl(list_get(0,&first), max,first));
printf("\n Absolute \n");
foreach(map_mut(abs, first),output_space);
printf("\n 2 Powers \n");
foreach(iterate(1,10, power), output_space);
printf("\n Save to text file \n");
save(first,"tex");
list_add_back(0, &sec);
printf("Loading to list \n");
load(sec,"tex");
sec = list_node_at(sec,1);
foreach(sec, output_space);
sec =NULL;
printf("\n Serialize ");
serialize(first,"tex");
list_add_back(0, &sec);
printf("\n Deserialize \n");
deserialize(sec,"tex");
sec = list_node_at(sec,1);
foreach(sec, output_space);
return 0;*/




















