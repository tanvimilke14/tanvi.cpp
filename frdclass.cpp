#include<iostream>
using namespace std;

class student;
class student{
private:
string name;
int marks;
friend class result;
public:
student(string n, int m){
name=n;
marks=m;
}
};
class result{
public:
void displayresult(student s){
cout<<"Student Name:"<<s.name<<endl;
cout<<"marks: "<<s.marks<< endl;
}
};
int main(){
student s("John Doe",85);
result r;
r.displayresult(s);
return 0;
}
