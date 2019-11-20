#include <iostream>
#include "Structs.h"

using namespace std;

int main()
{
	Region reg = Region(2, 3, 4, 5);
	Point p = Point(1, 2);	
	RegionArray regarray = RegionArray();
	regarray.Add(reg);
	cout << reg.StartX << endl;
	cout << p.X << endl;
	
}
