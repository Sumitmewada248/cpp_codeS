#include<iostream>
#include<string.h>
using namespace std;
// Pasword
int main()
{
    char c[10];
    char v[10];
    cout<<"enter pwd \n";
    cin>>c;
    cout<<"enter pwd \n";
    cin>>v;

    if(strcmp(c,v)==0)
{

    cout<<"pwd matched"<<"\n";

}
else{
    cout<<"pwd not matched"<<"\n";

}
cout<<"name: "<< c <<"\n";
cout<<"reverse: "<< strrev(c) <<"\n";
cout<<"length: "<< strlen(c) <<"\n";
cout<<" upper letter: "<< strupr(c) <<"\n";
cout<<" small letter : "<< strlwr(c) <<"\n";
cout<<"merge: "<< strcat(c,v) <<"\n";
strcpy(c,v);
cout<<"name ="<<c<<"\n";
cout<<"surname ="<<v<<"\n";



}
