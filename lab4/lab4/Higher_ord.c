#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "list.h"
void foreach(item * const first, void (*farg)(int)){
item* iter = first;
while (iter){
farg( iter->num);
iter = iter->next;
}
}


item* map(int (*farg)(int), item  *const first){
 item* map = NULL;
item* iter = first;
int n;
int nval;
while(iter){
n = iter->num;
nval = farg(n);
list_add_back(nval, &map);
iter =iter->next;
}
return map;
}


item* map_mut(int (*farg)(int), item * const first){
item *iter = first;
while(iter){
iter->num = farg(iter->num);
iter=iter->next;
}
return first;
}

int foldl(const int accum, int (*farg)(int, int), item * const first){
int acc = accum;
item* iter = first;
int n;
while (iter){
n = iter->num;
acc=farg(n, acc);
iter=iter->next;
}
return acc;
}

item* iterate(const int s, const int n, int (*farg)(int)){
item * first =NULL;
int i;
int res = s;
list_add_back(res, &first);
for (i=1;i<n;i++){
res = farg(res);
list_add_back(res, &first);
}
return first;
}












