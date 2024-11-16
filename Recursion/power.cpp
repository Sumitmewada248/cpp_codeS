#include<iostream>
using namespace std;

int pow(int b, int p){
if(b==0){
    return 0;
}

if(p==0){
    return 1;
}
int ans=b*pow(b,p-1);
return ans;

}
int main(){

int b,p;
cout<<"enter base \n";
cin>>b;

cout<<"enter base \n";
cin>>p;

cout<<pow(b,p);
}
