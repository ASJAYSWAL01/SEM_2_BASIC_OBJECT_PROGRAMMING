#include<iostream>
using namespace std;

class student{

    int roll_no;
    int marks ;
   public:
    student(int r, int m){
        roll_no = r;
        marks = m;
    }


void display(){
    cout<<"Roll no: "<<roll_no <<endl <<"Marks: "<<marks;
}

};

int main(){
    student s1(5,55);
   
    s1.display();
}