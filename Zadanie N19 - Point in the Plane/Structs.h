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
	/**
	Summary: This object represent a region in shape of a quadrangular in coordinate system
	Patams: (int Start X, int Start Y, int End X, int End Y)
	*/
	Region(int sx, int sy, int ex, int ey);
	/**
	Warning! : The object must have parameters (int Start X, int Start Y, int End X, int End Y)
	*/
	Region();
};
struct RegionArray
{
	//Properties
	Region AllRegions[10];
	int RegionCounter = 0;
	//Constructor
	/**
	Summary: This object is a array containing all Regions that are given
	Params: Region object
	*/
	RegionArray(Region reg);
	/**
	Summary: This object is a array containing all Regions that are given
	Params: Region object
	*/
	RegionArray();
	//Methods
	/**
	Summary: This method add Region object to the array inside the this object
	Params: Region object
	Returns: None
	*/
	void Add(Region reg);
};
struct Point
{
	//Properties
	int X;
	int Y;
	//Constructors
	/**
	Summary: This object represent a point in the cordinate system
	Params: (int X, int Y)
	*/
	Point(int x, int y);
	/**
	Warning! : The object must have parameters (int X, int Y)
	*/
	Point();
	//Methods
	/**
	Summary: Print in the console if the Point is found anywhere in the given Regions
	Params: Region * -> array from type Region
	Returns: None
	*/
	void CheckIfInRegion(Region * regar);
	/**
	Summary: Print information about the object
	Params: None
	Returns: None
	*/
	void Help();
};