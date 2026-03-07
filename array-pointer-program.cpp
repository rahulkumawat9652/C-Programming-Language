#include<iostream>
using namespace std;
class ShopIteam{
int id;
float price;
public:

void setdata(int a ,float b){
    id = a;
    price = b;
}
void getData(void){
cout<<"code of item is "<<id<<endl;
cout<<"price of item is "<<price<<endl;
}
};
int main(){
int size = 3;
ShopIteam *ptr = new ShopIteam[size];
ShopIteam *ptrTemp = ptr;
int p,i;
float q;
for(i=0;i<size;i++){
cout<<"enter id and price of item "<< i+1<<endl;
cin>>p>>q;
ptr->setdata(p,q);
ptr++;
}
for(i=0; i<size; i++){
cout<<"item number  "<<i+1<<endl;
ptrTemp->getData();
ptrTemp++;
}
return 0;
}