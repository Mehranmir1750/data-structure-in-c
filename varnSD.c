#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void create_ll();
void display_ll();
float varNsd();
int n;

struct node {
    int data;
    struct node*next;
};

struct node *head=NULL, *tail = NULL;


int main(){
    
    create_ll();
    display_ll();
    varNsd();
    //printf("\nvarience is: %.2f",var());
}

void create_ll(){

    
    struct node *temp;

    printf("enter the size of linked list:");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        temp =(struct node*)malloc(sizeof(struct node)); 

        printf("enter data:");
        scanf("%d",&temp->data);
         if(head == NULL)
        {
            head  = temp;
            tail  = temp;
        }
        else
        {
            tail->next = temp;     
            tail = temp;
        }
         tail->next = NULL;
        
    }  
    
}
    void display_ll(){
        
struct node *x=head;

        while(x!=NULL){

            printf("%d\n",x->data);

            x=x->next;
        }

    }
        float varNsd(){

            struct node *y=head;
            float sum=0, average ;

            while (y!=NULL)
           

             {
                            
               sum += y->data;
        
                y=y->next;

            }
                
                average =(sum/n)*1.0  ;
                      
            float diff=0, res=0.0;
             y =head;
            while (y!=NULL)
            {
                diff +=(y->data -average)*(y->data -average);
              y=y->next;
            }
    
            res = (diff/n)*1.0;

             printf("\nvarience is: %.2f",res);

             printf("\nstandard varience is:%.2f", sqrt(res));
           
        }
