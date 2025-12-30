#include<iostream>
using namespace std;
class Base{
protected:
int base1int;
public:
void set_base1int(int a){
base1int = a;
}
};
class Base2{
protected:
int base2int;
public:
void set_base2int(int a){
base2int = a;
}
};
class Derived : public Base ,public Base2{
public:
void show(){
cout<<"the value of base1int is "<<base1int<<endl;
cout<<"the value of base2int is "<<base2int<<endl;
cout<<"the sum of value is "<<base1int + base2int<<endl;
}
};
int main(){
Derived rahul;
rahul.set_base1int(20);
rahul.set_base2int(10);
rahul.show();
return 0;
}