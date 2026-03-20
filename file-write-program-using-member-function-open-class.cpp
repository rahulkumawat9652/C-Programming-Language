#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream out;
out.open("rahul.text");
out<<"Rahul kumawat";
out.close();
return 0;
}