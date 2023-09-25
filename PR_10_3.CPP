#include<iostream>
using namespace std;

class count{
    public:
    count(){
        cout<<"Constructor is called"<<endl;
    }

    ~count(){
        cout<<"Destructor is called"<<endl;
    }
};

int main(){
    count a;{
        count b;
    }

}