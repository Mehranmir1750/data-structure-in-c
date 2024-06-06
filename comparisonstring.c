
#include<stdio.h>

int compare(char[],char[]);

int main(){

    char name [10];
    char name2 [10];
    int i =0;

    printf("enter name 1:");
    gets(name);

    printf("enter name 2:");
    gets(name2);

    int c = compare(name,name2);

    if(c==0){
      printf("the strings are equal");
    }else{
      printf("the strings are unequal");
    }
    
} 

int compare(char name[],char name2[]){
    int i = 0;

    while (name !='\0'&& name2 !='\0'){
    
           if (name[i]==name2[i])
           {
            return 0;
           }
           i++;
           if (name[i]!=name2[i])
           {
            
            return 1;
           }
           
    }

}