#include<iostream>
using namespace std;
void func(int a){
cout<<"I am first func() "<<a<<endl;
}
template<class T>
void func(T a){
cout<<"I am template func() "<<a<<endl;
}
int main(){
func(4);
func(5.6);
return 0;
}