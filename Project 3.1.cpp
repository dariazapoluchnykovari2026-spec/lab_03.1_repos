#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; 
	double y; 
	double A; 
	double B; 
	cout << "x = "; cin >> x;

	A = 2* abs(pow(x,3));
	// спосіб 1: розгалуження в скороченій формі
	if (x<=-0.1)
		B = 5*sin(18*x);
	if (-0.1 < x && x < 1,2)
		B = atan((x+2)/5);
	if (x>= 1.2)
		B = 1/tan(x+18);
	y = A - B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// спосіб 2: розгалуження в повній формі
	if (x<=-0.1)
		B = 5*sin(18*x);
	else
		if (x>=1.2)
			B = 1/tan(x+18);
		else
			B = atan((x+1)/5);
	y = A - B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}
