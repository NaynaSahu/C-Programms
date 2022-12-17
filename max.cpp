#include<iostream>
using namespace std;
int main()
{
int b=0 ,a[5] , s = 0  ;



for (int i = 0; i <=5; i++)
{
    cout<<"enter the values = ";
    cin>>a[i];
    
    
}


for (int j = 0; j <=5; j++)
{

    if(b<a[j]){

        b = a[j];
        
    }
    
        
    }
    cout<<b;
    int c = b;
    for (int j = 0; j <=5; j++)
{

    if(c>a[j]){

        c = a[j];
        
    }
    
        
    }
    cout<<c;



    
return 0 ;   
    
}







