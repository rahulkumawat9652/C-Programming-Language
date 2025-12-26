#include<iostream>
using namespace std;
//Base class
class Employee{
public:
int id;
float salary;
Employee(int inpId){
id = inpId;
salary = 34;
}
Employee(){}
};
//Derived class syntax 
class Programmer : public Employee{
public:
int languageCode;
Programmer(int inpId){
id = inpId;
languageCode = 9;
}
void getData(){
cout<<id<<endl;
}
};
int main(){
Employee harry(1),rahul(2);
cout<<harry.salary<<endl;
cout<<rahul.salary<<endl;
Programmer skillF(10);
cout<<skillF.id<<endl;
cout<<skillF.languageCode<<endl;
skillF.getData();
return 0;
}