#include<iostream>
using namespace std;
//calculate the valume of cylinder
int volume(int r,int h){
return (3.14*r*r*h);
}
//calculate the valume of cube
int volume(int a){
return a*a*a;
}
//calculate the value of ractangular
int volume(int l,int b,int h){
return (l*b*h);
}
int main(){
cout<<"the volume of cylinder of radius 3 and height 6 is "<<volume(3,6)<<endl;
cout<<"the volume of cube of side 3 is "<<volume(3)<<endl;
cout<<"the volume of ractangular of 3,7 and 6 is "<<volume(3,7,6)<<endl;
return 0;
}