#include<iostream>
#include<fstream>
using namespace std;
int main(){
ifstream in;
string st;
in.open("rahul.text");
while(in.eof() == 0 ){
getline(in,st);
cout<<st<<endl;
}
in.close();
return 0;
}