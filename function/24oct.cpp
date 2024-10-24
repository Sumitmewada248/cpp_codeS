#include<iostream>
using namespace std;
void swp(int a, int b){

a=a+b;
b=a-b;
a=a-b;

cout<<"value of swap a"<<a<<endl;
cout<<"value of swap b"<<b<<endl;
}


int main(){
    int x,y;
    cout<<"enter 2 no \n";
    cin>>x>>y;

    swp(x,y);

cout<<" value of x :"<<x<<endl;
cout<<" value of y :"<<y<<endl;



}
