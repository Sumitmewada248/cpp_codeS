#include<iostream>
using namespace std;

class rbi
{

    public:void rbishow()
    {
        cout<<"\n SBI CLASS \n";

    };
};


class sbi:public rbi
{

    public:void sbishow()
    {
        cout<<"\n SBI CLASS \n";

    };
};

class axis :public rbi
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
//c.rbishow();

c.sbishow();
c.axisshow();
c.show();
}
