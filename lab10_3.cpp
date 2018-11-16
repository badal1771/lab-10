#include <iostream>
using namespace std;
class box {
public:  //using public in class
    //specification of box
    double length;    //length of box
    double breath;    //breath of box
    double getarea(void){return length*breath;}
    double getperimeter(void){return length+breath;}};
    int main()
    {
        //declare box 1 of type box
        box box1;    //declare box 1 of type box
        //store the area value of the box
        double area=0;
        //store the perimeter value of box
        double perimeter=0;
        //data of box 1
        box1.length=10;   //inputing the length of box 1
        box1.breath=20;   //inputing the length of box 2
        area=box1.getarea();
        perimeter=box1.getperimeter();
        //displaying the area of box 1
        cout<<"the area of box 1 is "<<area<<endl;
        //displaying the perimeter of box 1
        cout<<"the perimeter of box 1 is "<<perimeter<<endl;
        //terminating the program
        return 0;

    }
