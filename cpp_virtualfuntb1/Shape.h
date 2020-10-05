#pragma once
#include <iostream>
using namespace std;
class Shape
{
public:
	Shape();
	//~Shape();
	double calcArea();
	virtual ~Shape();
	//virtual double calcArea();
};

