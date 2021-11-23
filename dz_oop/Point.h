#pragma once
class Point
{
	double x;
	double y;
public:
	double get_x()const
	{
		return x;
	}

	double get_y()const
	{
		return y;
	}

	void set_x(double x)
	{
		this->x = x;
	}

	void set_y(double y)
	{
		this->y = y;
	}

	void print()const
	{
		cout << x << "\t" << y << endl;
	}

	double distance(Point& B)
	{
		return sqrt(pow(this->x - B.x, 2) + pow(this->y - B.x, 2));
	}

	~Point()
	{
		cout << "Destructor" << endl;
	}
};