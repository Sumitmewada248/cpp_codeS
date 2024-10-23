#include<iostream>
using namespace std;


int dealer(int pet){
return 80*pet;

}




int main(){ 

int demand;
cout<<"enter the quantity";
cin>>demand;

cout<<dealer(demand)<<endl;


int costumer;
cout<<"How much required";
cin>>costumer;
cout<<"costumer bill :"<<dealer(costumer)+costumer*5<<endl;



}
