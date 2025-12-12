#include<iostream>
using namespace std;
class Shop{
int itemId[100];
int itemPrice[100];
int counter; 
public:
void initCounter(void){counter=0;}
void getPrice(void);
void displayPrice(void);    
};
void Shop::getPrice(void){
cout<<"enter Id of your item"<<counter+1<<endl;
cin>>itemId[counter];
cout<<"enter Price of your item"<<endl;
cin>>itemPrice[counter];
counter ++;
}
void Shop::displayPrice(void){
for(int i=0;i<counter;i++){
cout<<"the price of item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
}
}
int main(){
Shop dukaan;
dukaan.initCounter();
dukaan.getPrice();
dukaan.getPrice();
dukaan.getPrice();
dukaan.displayPrice();
return 0;
}