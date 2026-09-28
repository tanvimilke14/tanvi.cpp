#include<iostream>
using namespace std;

class vehicle{
public:
vehicle(){
cout<<"This is a vehicle"<<endl;
}
};

class wheels{
public:
wheels(){
cout<<"wheels of vehicle"<<endl;
}
};

class car: public vehicle, wheels{
public:
car(){
cout<<"This vehicle is a car and it has 4 wheels"<<endl;
}
};

int main(){
car obj;

return 0;
}
