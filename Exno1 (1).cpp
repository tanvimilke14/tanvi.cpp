#include<iostream>
using namespace std;
class student
{
private:
string name;
int roll_no;
float marks;

public:
void input()
{
cout<<"enter student name: ";
cin>>name;
cout<<"enter roll number: ";
cin>>roll_no;
cout<<"enter marks: ";
cin>>marks;
}
void display()
{
cout<<"student name: "<<name<<endl;
cout<<"roll number: "<<roll_no<<endl;
cout<<"marks: "<<marks<<endl;
}
};
int main()
{
student s;
s.input();
cout<<"\n student details: \n";
s.display();
return 0;
} 
