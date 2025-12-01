#include<iostream>
using namespace std;
int main(){
int age;
cout<<"tell me your age";
cin>>age;
switch(age){
case 18:
cout<<"you are 18";
break;
case 22:
cout<<"you are 22";
break;
case 2:
cout<<"you are 2";
break;
default:
cout<<"no special case";
}
cout<<"done with switch case";
return 0;
}