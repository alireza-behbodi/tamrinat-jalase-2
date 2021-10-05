#include <iostream>
using namespace std;
int main()
{
	char name;
	char family;
	float lesson1, lesson2, lesson3, average;
	cout << "Enter Your Name:";
	cin >> name;
	cout << "Enter Your family:";
	cin >> family;
	cout << "Enter lesson1 ";
	cin >> lesson1;
	cout << "Enter lesson2";
	cin >> lesson2 ;
	cout << "Enter lesson3";
	cin >> lesson3 ;
	average = (lesson1 + lesson2  + lesson3) / 3;

	if (average >= 17)
	{
		cout << name << " " << family << " Your average is : " << average << " Great"<<endl;
	}
	else if (17 > average && average >= 12) {
		cout << name << " " << family << " Your average is : " << average << " Normal" << endl;;
	}
	else if (average <12) {
		cout << name << " " << family << " Your averageis : " << average << " Fail"<<endl;
	}
	return 0;
	system("pause");
}