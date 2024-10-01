#include<iostream>
#include<cmath>
using namespace std;
int main(){

///Q.1 W.A..P to display only unique value in an array?
/*
int a[]={10,10,3,3,4,5,5};
int siz=sizeof(a)/sizeof(a[0]);


for(int i=0;i<siz;i++){
    bool uniquevalue=true;

    for(int j=0;j<i;j++){
        if(a[i]==a[j]){
            uniquevalue=false;
            break;
        }
    }
    if(uniquevalue){
        cout<<a[i]<<"\t";
    }

}

cout<<endl;


*/

///Q2. W.A..P.   to  only  display the prime values in an array?
/*
int n;
cout<<"enter the length of array";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cout<<"enter the value of index"<<i<<":";
    cin>>arr[i];

}
for(int i=0;i<n;i++){
    bool prime=true;
    for(int j=2;j<arr[i];j++){
        if (arr[i]%j==0){
            prime=false;
        }
    }
    if(prime==true){
        cout<<arr[i]<<" ";
    }
}
*/

///Q.3 W.A.P.  to finding single  missing number in a consecutive value in an array?

/*
int n;
cout<<"Enter length of arr ";
cin>>n;
int arr[n];

 for(int i=0;i<n;i++){
    cout<<"Enter value of index "<<i<<" : ";
    cin>>arr[i];
    }

int diff;
if(arr[1]-arr[0]==arr[2]-arr[1]){
 diff=arr[1]-arr[0];
}
if(arr[2]-arr[1]==arr[3]-arr[2]){
 diff=arr[2]-arr[1];
}

for(int i=1;i<n;i++){
  if(arr[i]-arr[i-1]!=diff){
    cout<<"Missing number is "<<arr[i-1]+diff�<<"�";
��}
}
*/


//W.A.P. to display the sum of alternate values of an array
/*
   int n;
    cout<<"Enter length of arr ";
    cin>>n;
int arr[n];

 for(int i=0;i<n;i++){
    cout<<"Enter value of index "<<i<<" : ";
    cin>>arr[i];
    }

int sum=0;
for(int i=0;i<n;i=i+2){
  sum=sum+arr[i];
}
cout<<"Sum of alternative�is�"<<sum;

*/


//W.A.P.  to find square root of valid number in an array?
 /*   int n;
    cout<<"Enter length of arr ";
    cin>>n;
int arr[n];

 for(int i=0;i<n;i++){
    cout<<"Enter value of index "<<i<<" : ";
    cin>>arr[i];
  }

for(int i=0;i<n;i++){
 double sqr=pow(arr[i],1/2.0);
 cout<<"Square root of "<<arr[i]<<" is "<<sqr<<endl;
}
*/


//W.A.P. to display array in ascending orders?
/*
    int n;
    cout<<"Enter length of arr ";
    cin>>n;
int arr[n];

 for(int i=0;i<n;i++){
    cout<<"Enter value of index "<<i<<" : ";
    cin>>arr[i];
    }

for(int i=0;i<n;i++){
 for(int j=i;j<n;j++){
    if(arr[i]>arr[j]){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
 }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<"�";
}

*/

//W.A.P. to display array in descending orders?
   /* int n;
    cout<<"Enter length of arr ";
    cin>>n;
int arr[n];

 for(int i=0;i<n;i++){
    cout<<"Enter value of index "<<i<<" : ";
    cin>>arr[i];
    }

for(int i=0;i<n;i++){
 for(int j=i;j<n;j++){
    if(arr[i]<arr[j]){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
 }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<"�";
}

*/

/*W.A.P. to shift all zero at the end but relative order should be maintained?
Ex: arr={2,4,0,9,0,7}
Output:{2,4,9,7,0,0} */

/*
int arr[]={2,4,0,9,0,7};
int len=sizeof(arr)/sizeof(arr[0]);
int j=0;
for(int i=0;i<len;i++){
    if(arr[i]!=0){
      arr[j]=arr[i];
      j++;
    }
}

for(j;j<len;j++){
arr[j]=0;
}

for(int i=0;i<len;i++){
    cout<<arr[i]<<"�";

}


*/
}




