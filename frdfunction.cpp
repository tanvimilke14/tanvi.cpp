#include<iostream>
using namespace std;
class Box{
int length;
public:
Box(int L){
length=L;
}
friend void showlength(Box b);
};
void showlength(Box b){
cout<<"length of box=" <<b.length<<endl;
}
int main(){
Box b(10);
showlength(b);
return 0;
}
