#include<iostream>
#include<cmath>   
using namespace std;
class Point{
public:
int x,y;
Point(int a,int b){
x=a;
y=b;
}
void displayPoint(){
cout<<"the point is("<<x<<","<<y<<")"<<endl;
}
friend double distance(Point p1, Point p2);
};
double distance(Point p1, Point p2) {
return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}
int main(){
Point p(1,1);
p.displayPoint();
Point q(1,2);
q.displayPoint();
 cout << "Distance between points = " << distance(p, q) << endl;
return 0;
}