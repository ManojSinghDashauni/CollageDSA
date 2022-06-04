// array of object
#include <iostream>
#include <conio.h>
using namespace std;

class student
{
    char name[20];
    int rollNo;
    public:
    void getdata()
    {
        cout<<"\nenter the name : ";
        cin.getline(name,20);
        cout<<"\nenter the rollNo : ";
        cin>>rollNo;
    }
    void putdata()
    {
        cout<<"\nNAME : "<<name<<"\nRoll Num : "<<rollNo;
    }
    
};
const int size=3;
int main()
{
    student S[size];//array of object
    for(int i=1;i<=size;i++)
    {
        S[i].getdata();
    }
    for(int i=1;i<=size;i++)
    {
        S[i].putdata();;
    }
    getch();
    return 0;
}