//create a linked list and display the items in the list
//create a stack to perform push and pop  operations using linked list
#include<stdio.h>
struct node
{
    int data;
    struct node *link;

};
int main()
{
     struct node * head =NULL;
     head =(struct node *)malloc(sizeof(struct node));
     head->data=1;
     head->link=NULL;
     printf ("%d" , head ->data);
}
