#include <iostream>

using namespace std;

int main()
{
	/*int age = 21;


	const float PI = 3.14f;

	cout << 2 * PI * 4 * 4;*/

	int x = 5;
	int y = x*5;

	unsigned int age;
	float salary;
	int favorite_number;

	cout << "Yasinizi daxil edin: ";
	cin >> age;
	cout << "\nMaasinizi daxil edin: ";
	cin >> salary;
	cout << "\nSevimli ededinizi daxil edin: ";
	cin >> favorite_number;

	cout << "Yas: " << age << " Maas: " << salary << " Sevimli Eded: " << favorite_number;
}
