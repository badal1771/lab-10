#include <iostream>
using namespace std;
class box{
public:
    //declaration of length
    double length;
    //declaration of breath
    double breath;
    //declaration of height
    double height;
    double getvolume(void){
    return length*breath*height;}};//returning the length*breath*height
    int main()
    {
        //declare of box 1
        box box1;
        //declare box 2 of box type
        box box2;
        //declaring the volume of box
        double volume=0;
        //specification of box1
        box1.length=15;
        box1.breath=25;
        box1.height=10;
        //specification ion of box 2
        box2.length=12;
        box2.breath=23;
        box2.height=10;
        volume=box1.getvolume();
        cout<<"volume of box 1"<<volume<<endl;
        volume=box2.getvolume();
        cout<<"volume of box 2 "<<volume<<endl;
        //terminating the program
        return 0;
    }
