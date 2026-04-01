#include<iostream>
#include<vector>
using namespace std;
template <typename T>
void display(vector<T> &v){
for(int i = 0;i<v.size();i++){
cout<<v[i]<<" ";
}
cout<<endl;
}
int main(){
vector<int> vec1;
//vector<char>vec2(4);
//vector<int>vec3(vec2);
vector<int>vec4(6,3);
display(vec4);
return 0;
}