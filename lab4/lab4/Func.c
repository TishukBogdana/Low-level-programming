#include <stdio.h>
#include <stdlib.h>
#include "node.h"

item* list_create(const int n){
 item* n_item = (item*) malloc(sizeof(item));
 n_item->prev=NULL;
 n_item->num = n;
 n_item->next = NULL;
 return n_item;
}

void list_add_front(const int n, item ** const first){
item* add ;
add = (item*) malloc(sizeof(item));
add->prev = NULL;
add->num = n;
add->next =*first;
*first = add;
}

void list_add_back(const int n, item ** const first){
item* iter =*first;
item* last;
if (iter == NULL){
*first = list_create(n);
}else{
while(iter->next){
iter = iter->next;
}
last = (item*) malloc(sizeof(item));
iter->next = last;
last->prev = iter;
last->num = n;
last->next = NULL;
}
}

int list_get(const int index, item const * const * const first){
int i;
int el;
const item* iter = *first;
for(i=0;i<index;i++){
iter = iter->next;
if(iter==NULL){
return 0;
}
}
el = iter->num;
return el;
}

void list_free(item ** const first){
item* iter = *first;
while(iter){
item* cur = iter;
iter=iter->next;
free(cur);
}
}

int list_length(item const * const first){
const item * iter = first;
int count =0;
while(iter){
count++;
iter=iter->next;
}
return count;
}

item* list_node_at(item  * const first,const int index){
item* iter = first;
int i;
for(i=0;i<index;i++){
iter=iter->next;
if(iter==NULL){return NULL;}
}
return iter;
}

long list_sum(item const * const first){
long sum =0;
const item* iter = first;
while(iter){
sum += (long) iter->num;
iter=iter->next;
}
return sum;
}













