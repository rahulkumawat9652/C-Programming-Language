#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main(){
int arr[] = {1,76,3,8,45,2};
sort(arr,arr+6,greater<int>());
for(int i = 0; i<6 ;i++){
cout<<arr[i]<<endl;
}
return 0;
}