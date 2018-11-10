#include <iostream>
using namespace std;
class box {
public:
    //specification of box
    double length;
    double breath;
    double getarea(void){return length*breath;}
    double getperimeter(void){return length+breath;}};
    int main()
    {
        //declare box 1 of type box
        box box1;
        //store the area value of the box
        double area=0;
        //store the perimeter value of box
        double perimeter=0;
        //data of box 1
        box1.length=10;
        box1.breath=20;
        area=box1.getarea();
        perimeter=box1.getperimeter();
        cout<<"the area of box 1 is "<<area<<endl;
        cout<<"the perimeter of box 1 is "<<perimeter<<endl;
        return 0;

    }
