#include<iostream>
#include<map>
#include<string>
using namespace std;
//map is an associative array
int main(){
map<string , int>marksMap;
cout<<"the empty's return value is "<<marksMap.empty()<<endl;
cout<<"the size is "<<marksMap.size()<<endl;
cout<<"the max size is "<<marksMap.max_size()<<endl;
return 0;
}