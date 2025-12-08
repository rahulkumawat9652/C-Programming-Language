#include<iostream>
using namespace std;
int fib(int n);
int main(){
cout<<"the value of fibonacci number is "<<fib(5);
return 0;
}
int fib(int n){
if(n==0){
return 0;
}
if(n==1){
return 1;
} 
int fibN1 = fib(n-1);
int fibN2 = fib(n-2);
int fibN = fibN1 +fibN2;
return fibN;
}