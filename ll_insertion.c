//linked list: Inserting a node at begginning
#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node* link;
    
};
struct node* head;
void Insert(int x){
   struct node* temp=( struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->link=NULL;
    if(head!=NULL){
        temp->link=head;
    }
    head=temp;
}
void print(){
     struct node* temp=head;
     printf("list is:\n");
     while(temp!=NULL){
         printf("%d\t",temp->data);
         temp=temp->link;
     }
     printf("\n");

}
int main(){
    head=NULL; // empty
    printf("how many numbers?\n");
    int n,i,x;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the value\t");
        scanf("%d",&x);
        Insert(x);
        print();
    }
    
    
}