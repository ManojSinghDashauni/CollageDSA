//NAME - Manoj Singh Dashauni
//ROLL NO - 12
//SECTION - F

//PROBLEM STATEMENT - WAP to store name, roll no,age, course and display the details.

//OBJECTIVE -to understand the implementation to store the details of student.

//EXPLANATION -In this program we create a class to store the details of student name roll no course and display it.

//SOURCE CODE
#include<iostream>
#include<conio.h>
using namespace std;

class student
{
int age,rollno;
char name[15],course[5];

public :
void getdata(char n,int a,int r,char c)
{
age=a;
rollno=r;
name[15]=n;
course[5]=c;

}
void putdata()
{
cout<<"name : "<<name[15]<<"\n";
cout<<"age : "<<age<<"\n";
cout<<"roll no : "<<rollno<<"\n";
cout<<"course : "<<course[5]<<"\n";
}
};



int main()
{
student student1 ;
cout<<"first object x1 \n";
student1.getdata('manoj',20,210416,'BCA');
student1.putdata();


getch();
return 0;
}