#include<iostream>
using namespace std;

class tim{

    int hours;
    int minute;
    
    public:
    
        void getdata(){
        
            cout<<"Enter hour: ";
            cin>>hours;
            cout<<"Enter minute:";
            cin>>minute;
        
        }
        
       tim total_time(tim t1,tim t2){
            
            tim t;
            t.hours = t1.hours+t2.hours;
            t.minute = t1.minute+t2.minute;
            
            if(t.minute>=60){
               
                t.hours=t.hours+(t.minute/60);
                t.minute=t.minute%60;
            }
            
            return t;
            
        }
        
        void display(tim t1,tim t2){
        
            tim t3;
            t3=total_time(t1,t2);
            cout<<"Total Time = "<<t3.hours<<":"<<t3.minute;

        } 

};

int main(){

    tim t1,t2,t3;
    t1.getdata();
    t2.getdata();
    t3.display(t1,t2);
    

    
}