// Room.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class clsDimension {
private:
	double m_dHeight;
	double m_dWidth;
public:
	void SetHeight(double dHeight) { m_dHeight = dHeight; }
	void SetWidth(double dWidth) { m_dWidth = dWidth; }
	double GetHeight() { return m_dHeight; }
	double GetWidth() { return m_dWidth; }
};

class clsWall : public clsDimension {
private:
	double m_dWallCost;
public:
	double GetWallCost() { return m_dWallCost; }
};

class clsFloor : public clsDimension {
private:
	double m_dFloorCost;
public:
	double GetFloorCost() { return m_dFloorCost; }
};

class clsBuilding : public clsDimension, clsWall {
private:

public:

};
int main()
{
	
	
 
}