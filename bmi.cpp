#include<iostream>
using namespace std;
int main()
{
	float weight;
	float height;
	float bmi;
	cout << "please enter weight" << endl;
	cin >> weight;
	cout << "please enter height" << endl;
	cin >> height;
	bmi = (weight )/ (height * height);
	cout << "your bmi is  = " << bmi << endl;
	if (bmi < 18.5) {
		cout << "UNDERWEIGHT" << endl;
	}
	else if (bmi >= 18.5 && bmi < 24.9) {
		cout << "Normal" << endl;
	}
	else if (bmi >= 24.9 && bmi < 29.9) {
		cout << "Underweight" << endl;
	}
	else if (bmi >= 29.9 && bmi < 34.9) {
		cout << "OBESE" << endl;
	}
	else if (bmi>= 34.9) {
		cout << "EXTREMELY OBESE" << endl;
	}

	system("pause");
}
