#include<iostream>
using namespace std;
class Rectangle
{
float length,width;

public:
Rectangle()
{
cout<<"Enter length: ";
cin>>length;
cout<<"Enter width: ";
cin>>width;
}
void area(){
cout<<"area: "<<length*width<<endl;
}
void perimeter(){
cout<<"perimeter: "<<2*(length+width)<<endl;
}
void display(){
area();
perimeter();
}
~Rectangle(){
cout<<"Destructor called";
}
};
int main(){
Rectangle r;
r.display();
return 0;
}
