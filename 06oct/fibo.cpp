#include<iostream>
using namespace std;
int main(){

    int fir =0,sec=1;
    int fibo=0,n;
    cout<<"enter the number";
    cin>>n;
    cout<<fir<<"\t"<<sec<<"\t";
    for(int i=1;i<=n;i++)
    {
        fibo=fir+sec;
        fir=sec;
        sec=fibo;
        cout<<fibo<<"\n";

    }
  // cout<<fibo<<"\n";



}
