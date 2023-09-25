#include<iostream>
using namespace std;

class a{
    public:
    a(){
    cout<<"A class";
    }
};

class b : public a{
    public:
    b(){
    cout<<"B class";
    }
};

int main(){
    b b1;
}