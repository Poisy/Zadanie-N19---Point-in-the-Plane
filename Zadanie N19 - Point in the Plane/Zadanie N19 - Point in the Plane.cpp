#include <iostream>
#include "Structs.h"

using namespace std;

int main()
{
	Region reg1 = Region(2, 3, 8, 6);
	Region reg2 = Region(1, 4, 4, 9);
	Point p = Point(3, 4);	
	RegionArray regarray = RegionArray();
	regarray.Add(&reg1);
	regarray.Add(&reg2);
	cout << reg1.StartX << endl;
	cout << reg2.EndX << endl;
	cout << p.X << endl;
	p.CheckIfInRegion(regarray);
	
}
