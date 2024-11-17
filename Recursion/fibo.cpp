/// find the nth term of fibonocci series

#include<iostream>
using namespace std;


int fibo(int a){
if(a<=1){
    return 1;
}
  return fibo(a-1)+fibo(a-2);

}

int main(){

int n;
 cout<<"enter any no to generate fibonocci\n";

 cin>>n;

 cout<<fibo(n)<<endl;



}

