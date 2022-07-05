#include<iostream>
using namespace std ;
#define n 4 
int front = -1 ;
int rear = -1 ;
int a [n];

 void enqueue(){
     int x;
   cout<<"enter the data"<<endl;
   cin>>x;
   if(rear==n-1){
       cout<<"queue overflow"<<endl;
   }
   else{
       rear++;
       a[rear]=x;
   }
   }
   void dequeue(){
       if(rear==-1&&front==-1){
           cout<<"queue underflow"<<endl;
       }
       else{
           cout<<"the element deleted is "<<a[rear]<<endl;
          rear--;
       }
   }
   void display(){
       int i;
       
       if(rear==-1&&front==-1){
           cout<<"empty queue"<<endl;
       }
       else{
           cout<<"displaying the data"<<endl;
           for(i=0;i<=rear;i++){
               cout<<a[i]<<endl;
           }
       }
   }
   void isfull(){
       if(rear==n-1){
           cout<<"queue is full"<<endl;
       }
       else{
           cout<<"not full"<<endl;
       }
   }
   void isempty(){
       if(rear==-1&&front==-1){
           cout<<"the queue is empty"<<endl;
       }
   }
   int main(){
    int c;
  while(1){
      cout<<"press 1 to enquque"<<endl;
      cout<<"press 2 to dequeue"<<endl;
      cout<<"press 3 to display"<<endl;
      cout<<"press 4 to check if the queue is full"<<endl;
      cout<<"press 5 to check if the queue is empty"<<endl;
      cout<<"press 6 to exit"<<endl;
      cin>>c;
      if(c==6){
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

          
          case 4:
         isfull();
          break;

          
          case 5:
         isempty();
          break;

           default:
          cout<<"invalid selection"<<endl;

      }
  }
return 0;
} 