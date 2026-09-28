#include<iostream>
#include<stdio.h>
using namespace std;
class student
{
int roll;
char name[25];
public:
void getdata()
{
cout<<"\n Enter roll_no :";
cin>>roll;
cout<<"\n Enter student name :";
cin>>name;
}
void putdata()
{
cout<<"\n ____________________";
cout<<"\n Student Marklist";
cout<<"\n_____________________";
cout<<"\n roll_no :"<<roll;
cout<<"\n student name :"<<name<<endl;
}
};
class StudentExam: public student
{
public:
int sub1,sub2, sub3, sub4,sub5,sub6;
float per;
public:
void accept_data()
{
getdata();
cout<<"\n Enter marks for subject 1:";
cin>>sub1;
cout<<"\n Enter marks for subject 2:";
cin>>sub2;
cout<<"\n Enter marks for subject 2:";
cin>>sub3;
cout<<"\n Enter marks for subject 3:";
cin>>sub3;
cout<<"\n Enter marks for subject 4:";
cin>>sub4;
cout<<"\n Enter marks for subject 5:";
cin>>sub5;
cout<<"\n Enter marks for subject 6:";
cin>>sub6;
}
void display_data()
{
putdata();
cout<<"\n marks of subject 1:"<<sub1;
cout<<"\n marks of subject 2:"<<sub2;
cout<<"\n marks of subject 3:"<<sub3;
cout<<"\n marks of subject 4:"<<sub4;
cout<<"\n marks of subject 5:"<<sub5;
cout<<"\n marks of subject 6:"<<sub6;
}
};
class StudentResult: public StudentExam
{
public:
void calculate(){
per=(sub1+sub2+sub3+sub4+sub5+sub6)/6.0;
cout<<"\n\n Total Percentage :"<<per;
cout<<"\n____________________\n";
}
};
int main()
{
StudentResult str;
int cnt,i;
cout<<"\n Enter no. of students you want?:";
cin>>cnt;
for (i=0;i<cnt;i++)
{
str.accept_data();
str.display_data();
str.calculate();
}
return 0;
}
