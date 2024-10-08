#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"enter the year";
    cin>>year;

    if(year%4==0 && year%100!=0 || year%400==0 ){
        cout<<"yes its a leap year";

    }
    else{
        cout<<" its not a leap year";
    }
}