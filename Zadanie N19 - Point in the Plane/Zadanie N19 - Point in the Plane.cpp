#include <iostream>
#include "Structs.h"

using namespace std;

int main()
{
	Region reg1 = Region(-1, -5, -5, -1);
	Point p = Point(-2,-2);	
	Point testPoint = Point();
	RegionArray regarray = RegionArray();
	regarray.Add(reg1);
	p.CheckIfInRegion(regarray.AllRegions);
	cout << testPoint.X << endl;
	p.Help();
}
