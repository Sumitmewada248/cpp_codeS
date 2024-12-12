#include<iostream>
using namespace std;

class RBI
{
    public : virtual void msg(){
    cout<<"\n RBI class \n";

    };
};

class SBI:public RBI
{
    public:void msg()
    {
        cout<<"\n SBI class \n";
    };

};

class PNB :public RBI
{
    public:void msg()
    {
        cout<<"\n PNB class \n";
    };

};

int main(){
RBI *obj;
RBI r;
obj=&r;
obj->msg();

SBI s;
obj=&s;
obj->msg();

PNB p;
obj=&p;
obj->msg();

}
