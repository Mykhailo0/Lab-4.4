// lab_4.4.cpp
// < Ящишин Михайло Андрійович >
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком
// Варіант 31

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double x, xp, xk, dx, A, B, y, R;

	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;

	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;

	while (x <= xk)
	{
		if (x < -1 - R)
			y = -x - 1 - R;
		else
			if (x == -1 - R)
				y = 0;
			else
				if (x > -1 - R && x < -1)
					y = sqrt(pow(((x - 1) * (x - 1)), -1.0) + R * R);
				else
					if (x >= -1 && x <= 1)
						y = R;
					else
						if (x > 1 && x < 2)
							y = R + (-1 - R) * (x - 1);
						else
							y = -1;

		cout << "|" << setw(7) << setprecision(2) << x << " |" << setw(10) << setprecision(3) << y << " |" << endl;
		x += dx;
	}

	cout << "---------------------------" << endl;
	return 0;
}