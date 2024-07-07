#include<stdio.h>
#include<stdlib.h>

void create_ll();
void display_ll();
int min_ll();
int max_ll();

struct node{

    int data;
    struct node*next;

};

struct node *head=NULL, *tail=NULL;

int main(){

    create_ll();
    display_ll();
    min_ll();
    max_ll();

}

void create_ll(){

    int n;
    struct node *temp;

    printf("enter the size of the linked link:");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        temp = (struct node*)malloc(sizeof(struct node));

        printf("enter data:");
        scanf("%d",&temp->data);

        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else{

           tail ->next =temp;
           tail = temp;
        }

        tail->next=NULL;
        
    }
    
}

void display_ll(){

    struct node *x=head;

    while (x!=NULL)
    {
        printf("%d\n",x->data);
        x=x->next;
    }
    
}

int max_ll(){

    struct node *x = head;
    int greatest = x->data;
    while (x!=NULL)
    {
        if (x->data>greatest)
        {
            
            greatest =x->data; 
           
        }
         x=x->next;
    }
    printf("greatest number is:%d",greatest);
}

int min_ll(){

    struct node *x = head;
    int lowest = x->data;
    while (x!=NULL)
    {
        if (x->data<lowest)
        {
            
            lowest =x->data; 
           
        }
         x=x->next;
    }
    printf("lowest number is:%d\n",lowest);
}