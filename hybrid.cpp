#include<iostream>
using namespace std;
class student{
public:
int roll;
char name[30];
};
class TestMarks:public student{
public:
int sub1, sub2, sub3, sub4, sub5;
};
class SportMarks: public student{
public:
int score;
};
class FinalResult: public TestMarks, public SportMarks{
public:
float per;
void process_result(){
cout<<"\n................\n";
cout<<"enter roll no:";
cin>>TestMarks::roll;
cout<<"enter student name:";
cin>>TestMarks::name;
cout<<"\n enter marks in subject1:";
cin>>sub1;
cout<<"\n enter marks in subject2:";
cin>>sub2;
cout<<"\n enter marks in subject3:";
cin>>sub3;
cout<<"\n enter marks in subject4:";
cin>>sub4;
cout<<"\n enter marks in subject5:";
cin>>sub5;
cout<<"\n enter sports score:";
cin>>score;
per=((sub1+sub2+sub3+sub4+sub5+score)/600.0)*100;
cout<<"\n student details";
cout<<"\n Roll Nbr:"<<TestMarks::roll<<endl;
cout<<"\n Percentage(including sports):"<<per<<"%"<<endl;
}
};
int main(){
FinalResult result;
result.process_result();
return 0;
}
