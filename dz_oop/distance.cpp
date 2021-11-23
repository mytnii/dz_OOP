#include"distance.h"

double distance(double a_x, double a_y, double b_x, double b_y)
{
	double distance_x = b_x - a_x;
	double distance_y = b_y - a_y;

	return sqrt(distance_x * distance_x + distance_y * distance_y);
}