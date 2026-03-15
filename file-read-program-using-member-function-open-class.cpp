#include<iostream>
#include<fstream>
using namespace std;
int main(){
ifstream in;
string st;
in.open("rahul.text");
in>>st;
cout<<st;
in.close();
return 0;
}