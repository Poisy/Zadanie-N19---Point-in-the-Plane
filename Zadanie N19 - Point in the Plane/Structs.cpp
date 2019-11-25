#include "Structs.h"
#include "stdio.h"

//Constructors
Point::Point(int x, int y)
{
	this->X = x;
	this->Y = y;
}
Region::Region()
{
	this->StartX = 0;
	this->StartY = 0;
	this->EndX = 0;
	this->EndY = 0;
	this->Cordinates[0] = 0;
	this->Cordinates[1] = 0;
	this->Cordinates[2] = 0;
	this->Cordinates[3] = 0;
};
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
}
RegionArray::RegionArray()
{
}
RegionArray::RegionArray(Region& reg)
{
	this->AllRegions[this->RegionCounter] = reg;
	this->RegionCounter++;
}

//Methods
Region* RegionArray::ReturnAllRegions()
{
	return this->AllRegions;
}
void RegionArray::Add(Region* reg)
{
	this->AllRegions[this->RegionCounter] = *reg;
	this->RegionCounter++;
}
void Point::CheckIfInRegion(RegionArray regar)
{
	bool isFoundAnywhere = false;
	for (Region reg : regar.ReturnAllRegions)
	{
		for (int x = reg.StartX, int y = reg.StartY, int counter = 1; x < reg.EndX && y < reg.EndY; x++, y++, counter++)
		{
			if (x == this->X && y == this->Y)
			{
				printf("The point (%d, %d) is in the %dst region.", this->X, this->Y, counter);
				isFoundAnywhere = true;
			}
		}
	}
	if (!isFoundAnywhere)
	{
		printf("The point (%d, %d) is not found in any region.", this->X, this->Y);
	}
}