#include<stdio.h>
#include<stdlib.h>

void create_ll();
void display_ll();
int add();
int n;
struct node{

    int data;
    struct node *next;
    
};


struct node *head = NULL, *tail = NULL;

int main(){

    create_ll();
    display_ll();
    add();
    
}


void create_ll(){

   // int n;
    struct node *temp;

    printf("enter the size of link list:");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {

        temp =(struct node*)malloc(sizeof(struct node));

        printf("enter data:");
        scanf("%d",&temp->data);

        if (head==NULL)
        {
            head=temp;
            tail = temp;
        }
        else{

            tail->next=temp;
            tail = temp;
        }

        tail->next=NULL;
        
    }}

    void display_ll(){

        struct node *x=head;

        while (x!=NULL)
        {
            printf("%d\n",x->data);
            x=x->next;
        }}

        

        int add(){

            struct node *y=head;
            float sum=0, average ;

            while (y!=NULL)
           

             {
                            
               sum += y->data;
        
                y=y->next;

            }

            printf("sum is:%.2f\n",sum);
                
                average =(sum/n)*1.0  ;

            printf("average is:%.2f",average);            
            
        }

    
    
    
