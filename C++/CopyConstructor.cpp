//copy constructor
#include <iostream>

using namespace std;
class demo{
    int id;
    public:
    demo(){};
    demo(int a){
        id=a;
    }
    demo(demo & d)//copy constructor syntax
    {
        id=d.id;
    }
    void print(){
        cout<<id<<endl;
    }
};

int main()
{
    demo d1(100);
    demo d2(d1);//by calling the con implicitliy
    demo d3=d1;//by calling the con explicitliy
    
    d1.print();
    d2.print();
    d3.print();
    return 0;
}