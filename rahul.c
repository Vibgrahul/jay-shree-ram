#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};
int insert(struct node *start,int data)
{
    struct node *ptr=malloc(sizeof(struct node));

    ptr->data=data;
    ptr->link=start;
    start=ptr;
    return;

}
void show(struct node *start)
{


        while(start!=NULL)
        {
            printf("%d",start->data);
            start=start->link;
        }

}
int main()
{
    struct node *start=NULL;
    insert(start,3);
    show(start);

}
