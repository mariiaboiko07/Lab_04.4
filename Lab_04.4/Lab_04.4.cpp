#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double R, xp, xk, dx, x, y;

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
		if (x < -6 - R)
			y = 0;
		else
			if (x < -6)
				y = -sqrt(R * R - (x + 6) * (x + 6));
			else
				if (x < -R)
					y = (R * (x + R)) / (6 - R);
				else
					if (x < 0)
						y = sqrt(R * R - x * x);
					else
						if (x < 3)
							y = R * (1 - x / 3.0);
						else
							y = (R * (x - 3)) / 6.0;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;

		x += dx;
	}

	cout << "---------------------------" << endl;
	return 0;
}
