#include <iostream>
using namespace std;

main()

{
    int unit;

    cout << "enter electricity Units :";
    cin>>unit;

    float bill;


    if(unit<=50)
    {
        bill=unit*0.50;
    }
    else if(unit >=51 && unit <= 150)
    {
        bill=(50*0.5)+((unit-50)*0.75);
    }
    else if(unit >=151 && unit <= 250)
    {
        bill=(50*0.5)+(100*0.75)+(unit-150)*1.2;
    }
    else
    {
        bill=(50*0.5)+(100*0.75)+(100*1.2)+(unit-250)*1.5;
    }

    bill=bill+(bill*0.20);

    cout << "electricity bill = rs." << bill << endl;
}