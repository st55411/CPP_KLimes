#pragma once
#ifndef OBJECT_H
#define OBJECT_H

class Object
{
private:
	int id;
	double x = 0;
	double y = 0;

	static int idCounter;
public:

	Object();

	virtual ~Object();

	int GetId() const;

	void SetX(double x);
	double GetX() const;

	void SetY(double y);
	double GetY() const;

};
#endif // !OBJECT_H
