#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <errno.h>
#include "structs.h"
int main(void)
{
void* heap  = heap_init(512);
mem_t* first = m_malloc(sizeof(mem_t));
tested* second= m_malloc(sizeof(tested));
tested* third= m_malloc(sizeof(tested));
mem_t* forth= m_malloc(sizeof(tested));
mem_t* fifth= m_malloc(sizeof(mem_t));
trace(heap);
printf("free first , second and last pointers\n");
m_free(second);
m_free(first);
m_free(fifth);
 trace(heap);
 third->a =8;
 third->b=32;
 printf(" %d %d\n", third ->a, third->b);
 tested* realloced = (tested*) m_realloc(third, sizeof(tested));
 printf(" %d %d\n", realloced->a, realloced->b);
    return 0;
}

void trace(mem_t* point){
mem_t* iter =  point;
while(iter){
printf("Address: %p next: %p is_free: %d capacity %lu\n", (void*) iter, (void*) iter->next, iter->is_free,iter->capacity );
iter=iter->next;
}
}
