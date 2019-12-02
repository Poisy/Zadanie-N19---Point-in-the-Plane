#include "Structs.h"
#include "stdio.h"
#include "math.h"

//Constructors
Point::Point(int x, int y)
{
	this->X = x;
	this->Y = y;
}
Point::Point()
{
	this->X = 0;
	this->Y = 0;
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
RegionArray::RegionArray(Region reg)
{
	this->AllRegions[this->RegionCounter] = reg;
	this->RegionCounter++;
}

//Methods
void RegionArray::Add(Region reg)
{
	this->AllRegions[this->RegionCounter] = reg;
	this->RegionCounter++;
}
void Point::CheckIfInRegion(Region * regar)
{
	bool isFoundAnywhere = false;
	Region* regarray = regar;
	for (int i = 0; i < 10; i++)
	{
		Region reg = regarray[i];
		int pX = this->X;
		int pY = this->Y;
		int regSX = reg.Cordinates[0];
		int regSY = reg.Cordinates[1];
		int regEX = reg.Cordinates[2];
		int regEY = reg.Cordinates[3];
		if (!(regSX && regSY && regEX && regEY)) continue;
		if ((pX >= regSX && pX <= regEX) && (pY >= regSY && pY <= regEY) ||
			(pX <= regSX && pX >= regEX) && (pY <= regSY && pY >= regEY) || 
			(pX <= regSX && pX >= regEX) && (pY >= regSY && pY <= regEY) || 
			(pX >= regSX && pX <= regEX) && (pY >= regSY && pY >= regEY))
		{
			printf("The point (%d, %d) is in the %dst region.\n", this->X, this->Y, i+1);
			isFoundAnywhere = true;
		}
	}
	if (!isFoundAnywhere)
	{
		printf("The point (%d, %d) is not found in any region.", this->X, this->Y);
	}
}
void Point::Help()
{
	printf("Step 1: Create the Point object\n\\
Step 2: Create Region object\n\\
Step 3: Create RegionArray object\n\\
Step 4: Put the Region object in the RegionArray with the method .Add()\n\\
Step 5: Call the method .CheckIfInRegion in the Point object with parameter the RegionArray object method .AllRegions()");
}