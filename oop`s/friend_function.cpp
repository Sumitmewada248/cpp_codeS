#include<iostream>
using namespace std;
class student2;
class student1;
class student1
{
    int marks=120;
    friend void cmp(student1,student2);

};
class student2
{
    int marks=100;
    friend void cmp(student1,student2);


};
     void cmp(student1 s1,student2 s2)
    {
        if (s1.marks>s2.marks)
        {
            cout<<"student1 has highiest marks="<<s1.marks;
        }
        else{
              cout<<"student2 has highiest marks="<<s2.marks;

        }
    }

int main(){
student1 obj1;
student2 obj2;
cmp(obj1,obj2);
}







