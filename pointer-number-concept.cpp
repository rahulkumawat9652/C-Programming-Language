#include<iostream>
using namespace std;
int main(){
int a=3;
int *b=&a;
cout<<"the address a is "<<&a<<endl;
cout<<"the address a is "<<b<<endl;
cout<<"the value a is "<<*b<<endl;
return 0;
}