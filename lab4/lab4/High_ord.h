
void foreach(item *, void (*)(int));
item* map(int (*)(int), item *);
item* map_mut(int (*)(int), item * );
int foldl(int , int (*)(int, int), item * );
item* iterate(int , int, int (*)(int));
