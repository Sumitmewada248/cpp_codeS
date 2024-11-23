#include<iostream>
using namespace std;

/*
static int a=0         ;
void show(){
a++;
cout<<a<<endl;
}

int main(){

show();
show();
}
*/

/*
class cybrome
{

    static int a;
    public :void show()
    {

        a++;
        cout<<a<<endl;
    }

};

int cybrome::a=20;
int main(){

cybrome c;
c.show();
c.show();
}


*/

class cybrome
{

    static int a;
    public :
    static void show()
    {
        cout<<a<<endl;
    }

};

int cybrome::a=20;
int main(){

cybrome ::show();
}









