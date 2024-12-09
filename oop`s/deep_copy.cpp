#include<iostream>
using namespace std;
#include<string.h>

class top{
    char *x;
    public :top(char *n){
    x=new char[20];
    strcpy (x,n);
    }
  top(top & ob){
     x=new char[20];
    strcpy (x,ob.x);
  }
  void concat(char *s){
  strcat(x,s);
  }
  void show(){
  cout<<"Name="<<x<<endl;
  }
};





int main(){


top t1("Amit");
top t2(t1);
t1.show();
t2.show();
t1.concat("Kumar");
cout<<"tittle t2";
t2.show();
cout<<"tittle t1";
t1.show();


}
