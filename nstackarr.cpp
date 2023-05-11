//SHRI KARESHIDDESWAR PRASANNA

#include<iostream>
using namespace std;
int arr[9];
int top[4]={-1};
int nxt[9];
int f=0;

//push the elements to the array 

void push(int item,int sn)
{
    if(free==-1)
      cout<<"stack is full"<<endl;
    int i=f;
    f=nxt[i];
    nxt[i]=top[sn];
    top[sn]=i;
    arr[i]=item;
    
}

void pop(int sn)
{
    if(top[sn]==-1)
      cout<<"stack is full"<<endl;
    int i=top[sn];
    top[sn]=nxt[i];
    nxt[i]=f;
    f=i;
    cout<<arr[i]<<" ";
    
}



int main()
{
    cout<<"SHRI KARESHIDDESWAR PRASANNA"<<"\n\n";
    int i;
    for(i=0;i<8;i++)
       nxt[i]=i+1;
    
    nxt[i]=-1;
    push(10,3);
    push(15,3);
    push(20,1);
    push(25,2);
    push(30,0);
    push(35,2);
    push(37,0);
    push(40,1);
    pop(0);
    pop(0);
    pop(1);
       
}