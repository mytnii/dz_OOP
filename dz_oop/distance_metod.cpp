// Написать метод ??? distance(???), который возвращает расстояние до указанной точки

#include"stdafx.h"
#include"Point.h"

void main()
{
	using namespace std;

	setlocale(LC_ALL, "");

	Point A;

	A.set_x(5);
	A.set_y(7);
	A.print();

	Point B;

	B.set_x(7);
	B.set_y(9);
	B.print();

	cout << A.distance(B) << endl;


}

