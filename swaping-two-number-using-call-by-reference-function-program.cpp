#include<iostream>
using namespace std;
void swapPointer(int &a,int &b){
int t = a;
a = b;
b = t;
}
int main(){
int x = 4,y = 5;
cout<<"the value of x is "<<x<<"and the value of y is "<<y<<endl;
swapPointer(x,y);
cout<<"the value of x is "<<x<<"and the value of y is "<<y<<endl;
return 0;
}