#include<iostream>
using namespace std;
class Student {
protected:
int roll_number;
public:
void set_roll_number(int);
void get_roll_number(void);
};
void Student :: set_roll_number(int r){
roll_number = r;
} 
void Student :: get_roll_number(){
cout<< "the roll number is "<<roll_number<<endl;
}
class Exam : public Student{
protected:
float maths;
float physics;
public:
void set_marks(float,float);
void get_marks(void);
};
void Exam :: set_marks(float n1,  float n2){
maths = n1;
physics  = n2;
}
void Exam :: get_marks(){
cout<<"the marks maths are "<<maths<<endl;
cout<<"the marks physics are "<<physics<<endl;
}
class Result : public Exam{
float percentage;
public:
void display_results(){
get_roll_number();
get_marks();
cout<<"your result is "<<(maths + physics)/2<<"%"<<endl;
}
};
int main(){
Result rahul;
rahul.set_roll_number(10);
rahul.set_marks(23,90);
rahul.display_results();
return 0;
}