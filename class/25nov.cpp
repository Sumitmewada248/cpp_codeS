#include<iostream>
using namespace std;
class fun{
public:
    int factorial (int n);
    int cube (int c);
};

int fun::factorial(int n){
int fact=1;

for(int i=n;i>0;i--){

fact=fact*i;

}
cout<<"factorial of "<<n<<" is :- "<<fact<<endl;

}
int fun:: cube(int c){
cout<<"cube of "<<c<<" is :- "<<c*c*c<<endl;

}

// Q1.W.a.P to create two functions factorial and cubes using function define outside of class
int main(){

int n,c;
cout<<"enter the no where factorial is require :- ";
cin>>n;

cout<<"enter the number which cube is require :- ";
cin>>c;

fun f;
f.factorial(n);
f.cube(c);
}
