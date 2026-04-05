#include <iostream.h>
#include <conio.h>
int main()
{ 
    int totalseconds, hours, minutes, seconds;
    
    cout << " Enter total seconds:";
    cin>> totalseconds;
    hours =totalseconds/3600;
    minutes=(totalseconds % 3600)/60;
    seconds=totalseconds %60;
    cout << "Hours: " << hours<<endl;
    cout << "Minutes. "<< minutes<<endl;
    cout << "Second : " << seconds;
    return 0;
}