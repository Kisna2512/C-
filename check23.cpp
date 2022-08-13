#include<iostream>
using namespace std;




class Rectangle{
     public:
     int height;
     int width;
     void display(){
          cout<<height<<" "<<width<<endl;
     }
 };
 class RectangleArea:public Rectangle{
     public:
     void read_input(){
         cin>>height>>width;
     }
     void display(){
         cout<<width*height;
     }
 };


int main()
{
   
    RectangleArea r_area;
   
    r_area.read_input();
    
   
    r_area.Rectangle::display();
    
   
    r_area.display();
    cout<<"   hello";
    
    return 0;
}