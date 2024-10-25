#include<iostream>
using namespace std;
void arr(int a[], int s)
{

for (int i=0;i<s;i++){
    a[i]=a[i]+10;
    cout<<a[i]<<"\t";

}
}


int main(){
    int x[]={2,1,3,5,4};
    int s=sizeof(x)/sizeof(x[0]);
    arr(x,s);
    cout<<"\n";
    for(int i=0;i<s;i++){
        cout<<x[i]<<"\t";
    }






}
