#include<iostream>
using namespace std;

class RBI
{

  public:RBI()  {
  cout<<"\n Rbi Memory allocated \n";

  }
  public:void server(){
  cout<<"\n RBI \n";
  }
};

class SBI
{

  public:SBI()  {
  cout<<"\n Sbi Memory allocated \n";

  }
  public:void client(){
  cout<<"\n SBI \n";
  }
};



int main(){

    SBI obj2;
    obj2.client();
    obj2.server();


}
