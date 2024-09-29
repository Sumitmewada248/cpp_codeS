#include<iostream>
using namespace std;
int main(){
for(int i=1;i<=3;i++){

       for(int s=3;s>i;s--){
        cout<<" ";
       }
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }
    cout<<endl;
}

/*
for(int i=3;i>=1;i--){

       for(int s=3;s>i;s--){
        cout<<" ";
       }
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}


for(int i=1;i<=3;i++){

       for(int s=1;s<i;s++){
        cout<<" ";
       }
    for(int j=3;j>=i;j--){
        cout<<"*";
    }
    cout<<endl;
}


*/

for(int k=2;k>=1;k--){

       for(int m=2;m>=k;m--){
        cout<<" ";
       }
    for(int l=1;l<=k;l++){
        cout<<"* ";
    }
    cout<<endl;
}
}
