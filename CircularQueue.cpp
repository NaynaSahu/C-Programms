#include<iostream>
using namespace std;
#define n 5
int front = -1 ;
int rear = -1 ;
int a[n] ;

 void enqueue(){
      int x;
      cout<<"enter the value of x"<<endl;
      cin>>x;
      if(front==(rear+1)%n){
          cout<<"queue overflow"<<endl;
      }
      else if(front==-1&&rear==-1){
          rear=front=0;
         a[rear]=x;
      }
      else{
          rear=(rear+1)%n;
          a[rear]=x;
      }
  }
  void dequeue(){
      if(front==-1&&rear==-1){
          cout<<"queue underflow"<<endl;
      }
      else{
          cout<<"the element dequeued is "<<a[front]<<endl;
          front=(front+1)%n;
      }
  }
  void display(){
      int i;
      
      if(front==-1&&rear==-1){
          cout<<"nothing to display"<<endl;
      }
      else{
          cout<<"displaying....."<<endl;
          for(i=front;i<=rear;i=(i+1)%n)
          {
              cout<<a[i]<<endl;
          }
      }
  }
int main(){
    int c;
  while(1){
      cout<<"press 1 to enquque"<<endl;
      cout<<"press 2 to dequeue"<<endl;
      cout<<"press 3 to display"<<endl;
      cout<<"press 4 to exit"<<endl;
      cin>>c;
      if(c==4){
          break;
      }
      switch(c){
          case 1:
          enqueue();
          break;

          case 2:
          dequeue();
          break;

          case 3:
         display();
          break;

          default:
          cout<<"invalid selection"<<endl;

      }
  }
return 0;
}