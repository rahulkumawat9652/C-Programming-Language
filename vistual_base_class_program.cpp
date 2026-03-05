#include<iostream>
using namespace std;
class Student{
protected:
int roll_no;
public:
void set_number(int a){
roll_no = a;
}
void print_number(void){
cout<<"your roll no is "<<roll_no<<endl;
}
};
class Test : virtual public Student{
protected:
float maths ,physics;
public:
void set_marks(float m1,float m2){
maths = m1;
physics = m2;
}
void print_marks(void){
cout<<"you result is here "<<endl<<"maths "<<maths<<endl<<"physics "<<physics<<endl;
}
};
class Sports : virtual public Student{
protected :
float score;
public :
void set_score(float sc){
score = sc;
}
void print_score(void){
cout<<"your pt score is "<<score<<endl;
}
};
class Result : public Test, public Sports{
private :
float total;
public :
void display(void){
total = maths + physics + score;
print_number();
print_marks();
print_score();
cout<<"your total score is "<<total<<endl;
}
};
int main(){
Result rahul;
rahul.set_number(4200);
rahul.set_marks(78 , 99);
rahul.set_score(9);
rahul.display();
return 0;
}