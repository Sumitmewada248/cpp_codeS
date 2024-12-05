#include<iostream>
using namespace std;
class cybrom{
char name[20];
int rno;
public:void input(){
cout<<"enter rollno \n";
cin>>rno;
cout<<"enter name \n";
cin>>name;
}
void show(){
cout<<"Rno="<<rno<<" ";

cout<<"Name="<<name<<"\n";
}
};

int main(){


cybrom obj[20];
int r;
cout<<"enter how many recodes \n";
cin>>r;

for(int i=0;i<r;i++)
{
    obj[i].input();
}
for(int i=0;i<r;i++)
{
obj[i].show();
}
}
