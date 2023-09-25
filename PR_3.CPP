#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
   float km , meter, cm , feet , inch;
   
   cout<<"enter km: "; 
  
   cin>>km;
    
   cm = 100000 * km;
   inch = 39370.1 * km;
   meter = 1000 * km;
   feet = 3280.84;
   
   cout<<"cm is:"<<setw(10)<<setfill ('*')<<setprecision(2)<<cm<<endl;
   cout<<"inch is:"<<setw(10)<<setprecision(2)<<inch<<endl;
   cout<<"meter is:"<<setw(10)<<setprecision(2)<<meter<<endl;
   cout<<"feet is:"<<setw(10)<<setprecision(2)<<feet<<endl;

    return 0;
}