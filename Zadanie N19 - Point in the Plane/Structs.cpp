#include "Structs.h"

//Region Struct Definition
Region::Region(int sx, int sy, int ex, int ey)
{
	this->StartX = sx;
	this->StartY = sy;
	this->EndX = ex;
	this->EndY = ey;
	this->Cordinates[0] = this->StartX;
	this->Cordinates[1] = this->StartY;
	this->Cordinates[2] = this->EndX;
	this->Cordinates[3] = this->EndY;
};

//Point Struct Definition
Point::Point(int x, int y)
{
	this->X = x;
	this->Y = y;
}
void Point::CheckIfInRegion(Region reg)
{

}


//RegionArray Struct Definition
void RegionArray::Add(Region reg)
{
	this->AllRegions[this->RegionCounter] = reg;
	this->RegionCounter++;
}
Region* RegionArray::ReturnAllRegions()
{
	return this->AllRegions;
}

