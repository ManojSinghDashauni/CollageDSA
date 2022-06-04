//parameterized constructor
#include <iostream>

using namespace std;

class demo{
    int m,n,a;
    public:
    demo (int x,int y){
        m=x;
        n=y;
        a=m*n;
    }
    void print(){
        cout<<m<<"\n"<<n<<"\n"<<a;
    }
} d1(10,20);

int main()
{
    d1.print();

    return 0;
}