//Napisz program kt�ry pobirze wsp�rz�dne 2D i obliczy jak daleko jesy ten punkt od srodka uk�adu wsp�rz�dnych 
#include <iostream>
void getCordinate(double& x, double& y)
{
	std::cout << "POdaj x\n";
	std::cin >> x;

	std::cout << "POdaj y\n";
	std::cin >> y;

}
void task2()
{
	double x, y;
	getCordinate(x, y);



	double distance = sqrt(x * x + y * y);
	std::cout << "odleg�o�c punktu do srodka" << distance;
}