#include<iostream>
using namespace std;
class Vehicle{
public:
void StartEngine()
{
cout<<"Engine Started\n";
}
};
class Car: public Vehicle{
public:
void drive(){
cout<<"Car is driving\n";
}
};
int main()
{
Car myCar;
myCar.StartEngine();
myCar.drive();
return 0;
}
