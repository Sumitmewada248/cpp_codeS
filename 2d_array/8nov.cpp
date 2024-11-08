#include<iostream>
using namespace std;

int main(){

int arr[2][3];
cout<<"enter 6 value \n";
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
  cin>>arr[i][j];
    }
}

cout<<"\n stored data is displayed \n";

for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
     cout<<arr[i][j]<<"\t";
    }

cout<<endl;
}

/*
int arr[3][3];
cout<<"enter 9 value \n";
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
  cin>>arr[i][j];
    }
}

cout<<"\n even values \n";

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
            if(arr[i][j]%2==0){
     cout<<arr[i][j]<<"\t";
            }
   // else{
    //    cout<<"0"<<"\t";
   // }
    }

cout<<endl;
}

*/
/*
int arr[3][3];
int sum=0;
cout<<"enter 9 value \n";
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
  cin>>arr[i][j];
    }
}

cout<<"\n sum of the values \n";

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
            sum=sum+arr[i][j];

}

}
cout<<sum;
}
*/
}