#pragma once

struct Region
{
	//Properties
	int StartX;
	int StartY;
	int EndX;
	int EndY;
	int Cordinates[4];
	//Constructor
	Region(int sx, int sy, int ex, int ey);
	Region();
};
struct Point
{
	//Properties
	int X;
	int Y;
	//Constructor
	Point(int x, int y);
	//Methods
	void CheckIfInRegion(RegionArray regar);
};
struct RegionArray
{
	//Properties
	Region AllRegions[10];
	int RegionCounter = 0;
	//Constructor
	RegionArray(Region& reg);
	RegionArray();
	//Methods
	void Add(Region* reg);
	Region* ReturnAllRegions();
};