#include<iostream>
using namespace std;

/*class top1;
{
   public:void show(){
       cout<<"top1 class\n";
   } ;

};

class top2;
{
   public:void display(){
       cout<<"top2 class\n";
   } ;

};

int main(){

top1 t1;
t1.show();
top2 t2;
t2.display();


}*/

class hacker{

public:void virus()
{
    cout<<"Ur system got hacked \n";
};
};

class user{

public:void reward()
{
    hacker h;
    cout<<"u won 2000000  in lottery \n";
    h.virus();
};
};


int main(){
user cust;
cust.reward();
}















