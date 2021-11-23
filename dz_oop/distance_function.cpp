// Написать функцию ??? distance(???), которая возвращает расстояние между двумя точками

#include"stdafx.h"
#include"distance.h"
#include"print.h"

void main()
{
	using namespace std;
	double a_x = 5,

		a_y = 7,
		b_x = 7,
		b_y = 9;

	print(a_x, a_y, b_x, b_y);

	cout << distance(a_x, a_y, b_x, b_y) << endl;
}

