//Create a class ‘shape’. Derive three classes from it: Circle, Triangle and Rectangle. 
//Include the relevant data members and functions in all the classes. 
//Find the area of each shape and display it.
#include<iostream>
using namespace std;

class shape
{
    public:
	float r,l,b,h;     
};
class circle: public shape
{
   
   public:
    void area()
   {
       cout<<"\nEnter radius : ";
       cin>>r;
       cout<<"\nArea of circle : "<<(2.146*r*r);
   }
};
class rectangle: public shape
{
	public:
   void area()
   {
       cout<<"\nEnter length : ";
       cin>>l;
       cout<<"\nEnter breadth : ";
       cin>>b;
       cout<<"\nArea of rectangle : "<<l*b;
   }
};
class triangle: public shape
{

       float a;
	public:
       void area()
       {
   	    cout<<"\nEnter height : ";
            cin>>h;
            cout<<"\nEnter breadth : ";
            cin>>b;
            a=0.5*h*b;
            cout<<"\nArea of triangle : "<<a;
       }
};
int main()
{
   circle c; 
   c.area();
   rectangle r; 
   r.area();
   triangle t;
   t.area();
   return(0);
}