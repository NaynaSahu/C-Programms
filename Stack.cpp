#include<iostream>
using namespace std;
# define n 5
int stack[n];
int top = -1;
 void push(){
   int x;
   cout<<"enter the element that you want to enter"<<endl;
   cin>>x;
   if(top==n-1){
       cout<<"stack overflow"<<endl;
   }
   else{
       top++;
       stack[top]=x;
   }
 }
 void pop(){
     if(top==-1){
         cout<<"nothing to pop , stack underflow"<<endl;
 }
 else{
     cout<<"the element that you deleted is "<<stack[top]<<endl;
     top--;
 }
 }
 void peek(){
 if(top==-1){
     cout<<"stack underflow"<<endl;
 }
 else{
     cout<<"the top most element in the stack is"<<stack[top]<<endl;
 }
 }
 void display(){
     cout<<"displaying......"<<endl;
     int i;
     for(i=top;i>=0;i--){
         cout<<stack[i]<<endl;
     }
 }
 int main(){
     while(1){
         int c;
         cout<<"press 1 to push"<<endl;
         cout<<"press 2 to pop"<<endl;
         cout<<"press 3 to peek"<<endl;
         cout<<"press 4 to display"<<endl;
         cout<<"press 5 to exit the program"<<endl;
         cin>>c;
   if(c==5){
       cout<<"program finished"<<endl;
       break;
   }
      switch(c){
          case 1:
           push();
           break;

           case 2:
           pop();
           break;

           case 3:
           peek();
           break;

           case 4:
           display();
           break;


           default:
           cout<<"invalid choice"<<endl;
      } 
     }
     return 0;
 }