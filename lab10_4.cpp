#include <iostream>
using namespace std;
// ********************************************************************
//  Declaration of class Point
// ********************************************************************

// class Point represents a two-dimensional point
class Point
{
    // private data members x, y represent coordinates of the point:
private:
  int x;
  int y;
public:
  // default class constructor (with no arguments):
  Point()
  {
      x=0;y=0;


  // class constructor that sets the coordinates x, y to the values xval,
  // yval:
  Point(int xval, int yval)
  {
      x=xval;
      y=yval;
  }

  // member function for moving a point by dx, dy:
  void Move(int dx, int dy)
  {
      x+=dx;
      y+=dy;
  }
  ;

  // member functions for getting values of x, y:
  int Get_x() const
  {
return x;
  }
  int Get_y() const
  {
      return y;
  };

  // member functions for setting x, y to xval, yval respectively
  void Set_x(int xval)
  {
      x=xval;
  };
  void Set_y(int yval)
  {
      y=yval;
  };

//Lab 7 exercise 4.1. Add declaration of member function Print here:
void print()
{
    cout<<"("<<x<<","<<y<<")"<<endl;
};



// ********************************************************************
//  Declaration of class Rectangle
// ********************************************************************

//Lab 7 exercise 4.2, 4.3: Add class Rectangle declaration HERE:
class rectangle
{
    //The private data members of the class include all 4 corner points of the rectangle.
private:
    Point p1; Point p2;Point p3; Point p4;
public:
    rectangle (){
    p1.Set_x(0);
    p1.Set_y(0);
    p2.Set_x(1);
    p2.Set_y(0);
    p3.Set_x(0);
    p3.Set_y(1);
    p4.Set_x(1);
    p4.Set_y(1);}

    rectangle (Point p11,Point p33)
    {
        p1=p11;
        p3=p33;
        p2.Set_x(p33.Get_x()) ;
    p2.Set_y(p11.Get_y()) ;
    p4.Set_x(p11.Get_x()) ;
    p4.Set_y(p33.Get_y()) ;
    }
    void prin(){
    cout<<"the  member function prints all 4 corners of the rectangle here are given";
    p1.prin();
    p2.prin();
    p3.prin();
    p4.prin();}
    //Add two private member functions side1, side2 to the class Rectangle to compute the lengths of the two sides. Using this function, write a public member function to compute the area of the rectangle

    private:

    int side1()
    {
        return (p2.Get_x()-p1.Get_x());
    }
    int side2()
    {
        return (p2.Get_y()-p1.Get_y());
    }
    public:
    void area()
    { cout<<side1*side2;
    }
};

// ********************************************************************
//  Methods for class Rectangle
// ********************************************************************

//Lab 7 exercise 4.2, 4.3. Add class Rectangle methods HERE:



// ********************************************************************
//  main() function for testing classes Point and Rectangle
// ********************************************************************



// Testing classes Point and Rectangle
int main()
{
// Declaring a point using default class constructor (x = y = 0):
    Point p1;
    cout << "The coordinates of p1 is ";
    p1.print();

// Declaring a point with coordinates X = 2, Y = 3:
    Point p2(2, 3);
    cout << "The coordinates of p2 is ";
    p2.print();


// Moving point p2 by (1, -1):
    p2.Move(1, -1);
    cout<< "After the move:" << endl;
    cout << "The coordinates of p2 is ";
    p2.print();

//Lab 7 exercise 4.1. Test member function print on points p1, p2:

//Lab 7 Exercises 4.2, 4.3. Testing of the class Rectangle goes here:
rectangle rect1;
rectangle rect2(p1,p2);
cout<<"the rectangle one is ";
rect1.prin();
cout<<"the area of rectangle 1` is";
rect1.area();
cout<<"the rectangle two is";
rect2.prin();
cout<<"the area of rectangle 2 is ";
rect2.area();
return 0;
}
