#include<iostream>
#include<fstream>
using namespace std;
int main(){
string st;
ifstream in("rahul.text");
//in>>st; //print only one word
getline(in,st); //print whole line
cout<<st;
in.close();
return 0;
}