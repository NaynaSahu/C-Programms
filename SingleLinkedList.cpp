#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
  int data;
  struct node*next;
};  
struct node*listtraversal(struct node *ptr){
    cout<<"displaying..."<<endl;
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
struct node*insertatfirst(struct node*head ,int data){
   struct node*ptr=(struct node*)malloc(sizeof(struct node));
   ptr->data=data;
   ptr->next=head;
   return ptr;

}
struct node*insertatindex(struct node*head , int data ,int index){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    int i;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
struct node*insertatend(struct node*head , int data){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
     ptr->data=data;
     struct node*p=head;
     while(p->next!=NULL){
     p= p->next;
     }
     p->next=ptr;
      ptr->next=NULL;
      return head;
}
//deleting the first node;
struct node* deletefirst(struct node*head){
    struct node*ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
int main(){
// variable declaration..
struct node*head;
struct node*second;
struct node*third;
// allocating memory in the heap..
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
//linking the elements..
head->data=1;
head->next=second;
second->data=2;
second->next=third;
third->data=3;
third->next=NULL;

      //head=insertatfirst(head,4);
      //listtraversal(head);
      //head=insertatindex(head,4,2);
     /* cout<<"linked list before insertion"<<endl;
      listtraversal(head);
      cout<<"linked list after insertion"<<endl;
      head=insertatend(head,4);
      listtraversal(head);*/
      cout<<"linked list before deletion"<<endl;
      listtraversal(head);
      cout<<"linked list after deletion"<<endl;
      head=deletefirst(head);
      listtraversal(head);

 return 0;
}