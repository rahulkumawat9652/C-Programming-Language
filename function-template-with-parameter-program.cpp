#include<iostream>
using namespace std;
template<class T1, class T2>
float funcavrage(T1 a, T2 b){
float avg = (a + b)/2.0;
return avg;
}
int main(){
float a;
a = funcavrage(5,2);
cout<<"the avg of these number is "<<a<<endl;
return 0;
}