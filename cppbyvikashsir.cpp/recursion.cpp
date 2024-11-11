#include<iostream>
using namespace std;


int  cybrom (int a)
{
    if(a<1){
            cout<<endl;
        return a;
    }
    cout<<a<<"\n";// Head recursion

    cybrom(a-1);
       cout<<a<<"\n";// Tail recursion
}
int main(){

        cybrom(5);



}
