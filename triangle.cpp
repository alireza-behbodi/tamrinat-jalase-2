#include <iostream>

using namespace std;

int main()
{
	float x;
	float y;
	float z;
	cout << "Enter  x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	cout << "Enter z: ";
	cin >> z;
	if (x<y + z && y<x + z && z<x + y)
	{

		cout << "triangle is correct" << endl;
	}
	else
		cout << "triangle is not correct"<<endl;

	return 0;
	system("pause");
}