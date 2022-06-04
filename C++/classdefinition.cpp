
#include <iostream>
#include<conio.h>
using namespace std;

class demo
{
    int num;
    float cost;
    public:
    void getdata(int n,float c)
    {
        num=n;
        cost=c;
    }
    void putdata()
    {
        cout<<num<<"\n"<<cost;
    }
}x1;
int main()
{
    x1.getdata(10,15.5);
    x1.putdata();
    getch();
    return 0;
}