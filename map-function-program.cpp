#include<iostream>
#include<map>
#include<string>
using namespace std;
//map is an associative array
int main(){
map<string , int>marksMap;
marksMap["Rahul"] = 99;
marksMap["Dipesh"] = 99;
marksMap["Rohan"] = 99;
map<string ,int>:: iterator iter;
for(iter = marksMap.begin() ; iter != marksMap.end() ;iter++){
cout<<(*iter).first<<" "<<(*iter).second<<"\n";
}
return 0;
}