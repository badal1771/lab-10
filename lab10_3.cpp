//sorry for submitting it late
//previous was having some mistake .so i have uploaded it once again.
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
        box box2;   //declare the box 2
        //store the area value of the box
        double area1=0;
        //store the perimeter value of box
        double perimeter1=0;
        //data of box 1
        double area2=0;
        //data of area of second box
        double perimeter2=0;
        //storing the value of perimeter of box 2
        cout<<"enter the length of box 1"<<endl;
        cin>>box1.length;   //inputing the length of box 1
        cout<<"enter the breath of length of box"<<endl;
        cin>>box1.breath;   //inputing the length of box 2
        cout<<"enter the length of box 2"<<endl;
        cin>>box2.length;
        cout<<" enter the breath of box 2"<<endl;
        cin>>box2.breath;
        area1=box1.getarea();
        perimeter1=box1.getperimeter();
        //displaying the area of box 1
        cout<<"the area of box 1 is "<<area1<<endl;
        //displaying the perimeter of box 1
        cout<<"the perimeter of box 1 is "<<perimeter1<<endl;
        area2=box2.getarea();
        perimeter2=box2.getperimeter();
        //displaying the area of box 2
        cout<<"the area of box 2 is "<<area2<<endl;
    //dislaying the perimeter of box 2
    cout<<"the perimeter of box 2 is "<<perimeter2<<endl;
        if (area1>area2)
        {
            cout<<"area 1 is greater than area 2 box"<<endl;
        }
        else
        {
            cout<<"area 2 box having greater area than area 1 box "<<endl;
        }
        if (perimeter1>perimeter2)
        {
            cout<<"perimeter of box 1 is greater than box 2"<<endl;
        }
        else
        {
            cout<<"perimeter of box 2 is greater than box 2"<<endl;
        }
        //terminating the program
        return 0;

    }
