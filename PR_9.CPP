 #include<iostream>
using namespace std;

class complex
{
  int real;
  int imaginary;

public:
   void getdata()
     {
        cout<<"Enter real no :";
        cin>>real;
        cout<<"Enter imaginary no :";
        cin>>imaginary;
     }
   void display()
     {
       cout<<"Number : "<<real<<" + "<<imaginary<<"i "<<endl<<endl<<endl;
     }
   friend void add(complex c1, complex c2);
};

void add(complex c1,complex c2)
{
   complex c;
   c.real=c1.real+c2.real;
   c.imaginary=c1.imaginary+c2.imaginary;
   cout<<"Added Number is : "<<c.real<<" + "<<c.imaginary <<"i";
}

  int main()
{
  complex cx,cy;
  cout<<"-->Enter 1st Complex Number : "<<endl;
  cx.getdata();
  cx.display();
  cout<<"-->Enter 2nd Complex Number : "<<endl;
  cy.getdata();
  cy.display();
  add(cx,cy);
  
  return 0;
}


































