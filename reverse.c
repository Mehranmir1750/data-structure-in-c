#include<stdio.h>
#include<string.h>

int main(){
    char a[10] ;

    printf("enter a string:");
    scanf("%s",a);

    printf("orginal string is : %s",a);

    int len = strlen(a);
     int j;
    for (int i = 0, j = len-1 ;i<=j ; i++,j--)
    {
        char c = a[i];
        a[i]=a[j];
        a[j]=c;

    }

     printf("\nreverse of string is %s",a);
}
/*
int reverse(char a[]){

    
    


}*/