#include<iostream>
using namespace std;

class rbi
{

    public:void rbishow()
    {
        cout<<"\n RBI CLASS \n";

    };
};


class sbi:virtual public rbi
{

    public:void sbishow()
    {
        cout<<"\n SBI CLASS \n";

    };
};

class axis:virtual public rbi
{


    public :void axisshow()
    {
        cout<<"\n AXIS CLASS \n";

    };
};

class customer:public sbi, public axis
{
      public:show()
    {
      cout<<  "\n customer class \n";
    };

};
int main(){
customer c;
c.rbishow();

c.sbishow();
c.axisshow();
c.show();
}
