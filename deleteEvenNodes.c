#include <stdio.h>
#include <stdbool.h>

typedef struct Node
{
    int data;
    node * next;
}node;


node * deletePosition(node * head, int pos) {
    node * temp= head;
    for (int i = 1; i<pos; i++) {
        temp = temp->next;
    }
    node * t = temp->next;
    temp->next = t->next;
    free(t);
    return head;
}

node * deleteEven (node * head)  {
    node * temp = head;
    int i=1;
    while (temp != NULL)
    {
        node * t = temp;
        temp = temp->next;
        if (t->data % 2 == 0){
            head = deletePosition(head, i);
        }
        i++;
    }
    return head;
}
