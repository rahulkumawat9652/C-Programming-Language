#include<iostream>
#include<fstream>
using namespace std;
int main(){
string st = "rahul kumawat";
ofstream out("rahul.text");
out<<st;
out.close();
return 0;
}