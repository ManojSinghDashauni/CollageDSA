// WAP to store rollNo,name,marks in 5 subject for a student in a class compute total and % marks display the details.
#include <iostream>
#include <conio.h>
using namespace std;

class student
{
    char name[20];
    int i,total=0,rollNo,mark[5];
    float per;
    public:
    void getdata()
    {
        cout<<"enter the name : ";
        cin.getline(name,20);
        cout<<"\nenter the roll number : ";
        cin>>rollNo;
        cout<<"\nenter the 5 subjects marks : ";
        for(i=0;i<5;i++)
        {
            cin>>mark[i];
        }
        
    }
    void compute()
    {
        for(i=0;i<5;i++)
        {
            total=total+mark[i];
        }
        
        per=total/5.0;
    }
    void putdata()
    {
        cout<<"NAME : "<<name<<"\n"<<"Roll Num : "<<rollNo;
        cout<<"\nMARKS : ";
        for(i=0;i<5;i++)
        {
            cout<<mark[i]<<" ";
        }
        cout<<"\nTotal : "<<total<<endl;
        cout<<"PERCENTAGE :"<<per;
    }
    
}S1;
int main()
{
    S1.getdata();
    S1.compute();
    S1.putdata();
    getch();
    return 0;
}