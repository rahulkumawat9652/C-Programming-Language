#include<iostream>
#include<cstring>
using namespace std;
class CWH{
protected:
string title;
float rating;
public:
CWH(string s,float r){
title = s;
rating = r;
}
virtual void display(){}
};
class CWMVideo: public CWH{
float videoLength;
public:
CWMVideo(string s,float r,float vl):CWH(s,r){
videoLength = vl;
}
void display(){
cout<<"this is an amazing video with title"<<title<<endl;
cout<<"ratings "<<rating<<" out of 5 stars"<<endl;
cout<<"length of this video is "<<videoLength<<" minutes"<<endl;
}
};
class CWMText: public CWH{
int words;
public:
CWMText(string s,float r,int wc):CWH(s,r){
words = wc;
}
void display(){
cout<<"this is an amazing text tutorial with title"<<title<<endl;
cout<<"rating of this text tutorial "<<rating <<" out of 5 stars"<<endl;
cout<<"words in this text tutorial is "<<words <<" words"<<endl;
}
};
int main(){
string title;
float rating, vlen;
int words;
title = "django tutorial";
vlen = 4.56;
rating = 4.89;
CWMVideo djVideo(title,rating,vlen);
djVideo.display();
title = "django tutorial text";
words = 433;
rating = 4.19;
CWMText djText(title,rating,words);
djText.display();
//using pointers to display
CWH* tuts[2];
tuts[0] = &djVideo;
tuts[1] = &djText;
tuts[0]->display();
tuts[1]->display();
return 0;
}