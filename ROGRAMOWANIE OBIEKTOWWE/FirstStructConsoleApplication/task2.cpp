//Napisz program który pobirze wspó³rzêdne 2D i obliczy jak daleko jesy ten punkt od srodka uk³adu wspó³rzêdnych 
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
	std::cout << "odleg³oœc punktu do srodka" << distance;
}