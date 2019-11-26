#include <iostream>
#include "Structs.h"

using namespace std;

int main()
{
	Region reg1 = Region(2, 3, 8, 6);
	Region reg2 = Region(1, 4, 4, 9);
	Region reg3 = Region(4, 6, 9, 10);
	Region reg4 = Region(-4, 5, -9, 9);
	Region reg5 = Region(2, -4, 1, 1);
	Region reg6 = Region(7, -5, -4, 2);
	Region reg7 = Region(0, -7, -1, 9);
	Point p = Point(-6, 7);	
	RegionArray regarray = RegionArray();
	regarray.Add(reg1);
	regarray.Add(reg2);
	regarray.Add(reg3);
	regarray.Add(reg4);
	regarray.Add(reg5);
	regarray.Add(reg6);
	regarray.Add(reg7);
	p.CheckIfInRegion(regarray.AllRegions);
}
