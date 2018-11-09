//sample question 1 of lab 10
#include <iostream>
using namespace std;
class box
{
public:
    //length of box
    double length;
    //breath of box
    double breath;
    //height of box
    double height;
    };
    int main()
    {//specification of box 1
        box box1;
        //specification of box 2
        box box2;
        //declaration the value of volume
        double volume=0;
        //specification of box 1
        //putting the value of box 1
        box1.length=10;
        box1.breath=15;
        box1.height=32;
        //specification of box 2
        box2.length=5;
        box2.breath=6;
        box2.height=15;
        //calculating the value box 1
        volume=box1.length*box1.breath*box1.height;
        cout<<"Volume of box is "<<volume<<endl;
        //calculating the value of box 2
        volume=box2.length*box2.breath*box2.height;
        cout<<"volume of box 2"<<volume<<endl;
        return 0;
    }
