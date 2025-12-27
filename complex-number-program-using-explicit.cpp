#include<iostream>
using namespace std;
class Complex{
int a,b;
public:
Complex(int x ,int y);
void printNumber(){
cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
}
};
Complex :: Complex(int x,int y){
a=x;
b=y;
}
int main(){
//inplicitcall
Complex a(4,5);
//explicit call
Complex b = Complex(5,7);
a.printNumber();
b.printNumber();
return 0;
}