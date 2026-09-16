#include<iostream>
using namespace std;
class student {
    string name;
    int marks;
    public:
    student(string n, int m){
        name =n;
        marks=m;
    }
    student(){
        cout<<"default constructor"<<endl;
    }
    student(const student &s){
        name=s.name;
        marks=s.marks;

    }
    void show(){
        cout<<name<<" ";
        cout<<marks<<" \n";
    }
    
};
int main(){
    student s1("vikas",90);
    student s2=s1;
    s1.show();
    s2.show();
student s3;
s3.show();


}