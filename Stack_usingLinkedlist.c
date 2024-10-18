#include<stdio.h>
#include<stdlib.h>

struct node
{
    int value;
    struct node * next;
};

struct node * top=NULL;

void push()
{
   struct node * ptr; int v;
   ptr=(struct node *) malloc(sizeof(struct node));
   
   if(ptr==NULL)
   {
       printf("Node cannot be created in stack \n Stack overflow! \n");
   }
   else
   {
       printf("Enter value \n");  
       printf("\n");
       scanf("%d",&v);
       ptr->value=v;
       ptr->next=top;
    top=ptr;
   }
}

void pop()
{
    struct node  * tmp;
   
    if(top==NULL)
    {
        printf("Stack is Empty!");
    }
    else
    {
     tmp=top;
     printf("%d is deleted \n",tmp->value);
           printf("\n");
     top=top->next;
     free(tmp);
    }
}

void display()
{
 struct node * ptr;
 ptr=top;
 if(ptr==NULL)
 {
     printf("Stack is Empty1");
 }
 else
 {
     while(ptr!=NULL)
     {
         printf("%d\n",ptr->value);
               printf("\n");
         ptr=ptr->next;
         
     }
 }
}


int main()
{
    int ch;
    do
    {
       printf("Enter your choice:\n");
       printf("1.Push");
       printf("\n");
       printf("2.Pop");
       printf("\n");
       printf("3.Display");
       printf("\n");
       printf("4.Exit");
       printf("\n");
        scanf("%d",&ch);
   
     
    switch(ch)
    {
        case 1:push();
        break;
        case 2:pop();
        break;
        case 3:display();
        break;
        case 4:exit(0);
        break;
       
        default:
        printf("Invalid choice!");
    }
   
    }
    while(ch!=5);
      return 0;

}
