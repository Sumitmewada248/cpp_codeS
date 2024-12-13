#include<iostream>
using namespace std;


class RBI
{
    public:virtual void helpdesk()=0;
    void fun ()
    {
        cout<<"\n";
    }
};

class SBI :public RBI
{
    public:void loan()
    {
        cout<<"\n Intrest Rate 9%";

    };
    void helpdesk()
{
    cout<<"\n May I help u by SBI ";
}
};

class AXIS :public RBI
{


    public:void loan()
    {
        cout<<"\n Intrest Rate 12%";

    };
    void helpdesk()
{
    cout<<"\n May I help u by AXIS";
}
};

int main(){

RBI *r;
SBI s;
r=&s;
r->helpdesk();
AXIS a;
r=&a;
r->helpdesk();

s.loan();
a.loan();


}
