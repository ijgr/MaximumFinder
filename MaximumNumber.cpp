//Maximum number.cpp
#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	cout << "enter three numbers ";
	cin >> a >> b >> c;

	if (a > b&&a>c)
	{
		cout << "The maximum number is  " << a <<endl;
			
	}
	else if (b > a&&b>c) 
	{

		cout << "The maximum number is  " << b << endl;
	}
	else if (c > b&&c>a)
	{
		cout << "The maximum number is  " << c << endl;
	}
	system("pause");
}
