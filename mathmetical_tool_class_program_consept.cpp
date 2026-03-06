#include<iostream>
#include<cmath>
using namespace std;
class Simpleculator{
int a,b;
public:
void getDataSimple(){
cout<<"enter the value of a "<<endl;
cin>>a;
cout<<"enter the value of b "<<endl;
cin>>b;
}
void performOperationSimple(){
cout<<"the value of a+b is "<<a+b<<endl;
cout<<"the value of a-b is "<<a-b<<endl;
cout<<"the value of a*b is "<<a*b<<endl;
cout<<"the value of a/b is "<<a/b<<endl;
}
};
class Scientificculator{
int a,b;
public:
void getDataScientific(){
cout<<"enter the value of a "<<endl;
cin>>a;
cout<<"enter the value of b "<<endl;
cin>>b;
}   
void performOperationScientific(){
cout<<"the value of sin(a) is "<<sin(a)<<endl;
cout<<"the value of cos(a) is "<<cos(a)<<endl;
cout<<"the value of tan(a) is "<<tan(a)<<endl;
cout<<"the value of exp(a) is "<<exp(a)<<endl;
}
};
class Hybridculator:public Simpleculator,public Scientificculator{
};
int main(){
Hybridculator calc;
calc.getDataSimple();
calc.getDataScientific();
calc.performOperationSimple();
calc.performOperationScientific();
return 0;
}     