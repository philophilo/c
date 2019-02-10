#include <stdio.h>
#include <stdlib.h> // for malooc

typedef struct listitem {
    struct listitem *next;
    struct listitem *prev;
    int data;
} LISTITEM;

int main(){
    LISTITEM *temp, head;

    head.next = (LISTITEM*) &head;
    head.prev = (LISTITEM*) &head;
    head.data = -1;

    printf("%p\n", &temp);
    for (int i = 0; i < 3; i++){
        temp = malloc(sizeof(LISTITEM));
        temp->data = i;
        temp->next = head.next;
        head.next  = temp;
        temp->prev = &head;
        temp->next->prev = temp;
        printf("temp->data %i, temp->next %p, head.next %p, temp->prev %p, temp->next->prev %p\n", 
                temp->data, temp->next, head.next, temp->prev, temp->next->prev);
    }

    // going forward
    temp = head.next;
    while (temp != &head){
        printf("fori >> current is %p, next %p, prev %p, data %i \n", 
                temp, temp->next, temp->prev, temp->data);
        temp = temp->next;
    }

    // going backwards
    temp = head.prev;
    while (temp != &head){
        printf("back << current is %p, next %p, prev %p, data %i \n", 
                temp, temp->next, temp->prev, temp->data);
        temp = temp->prev;
    }
}
