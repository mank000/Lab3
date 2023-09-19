#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int solution1() {
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	if (num1 > 0 == num2 > 0 != num3 > 0) cout << "правда\n"; //23 -4 12
	return 0;
}
int solution2() {
	float num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	if (num1 < num2 < num3) { num1++; num2++; num3++; cout << "Итог:\n"; };
	cout << num1 << "\n" << num2 << "\n" << num3 << "\n";
	return 0;
}
int solution3() {
	const float a = 0.004;
	const int b = 42;
	double UserNum = 0.0;
	cin >> UserNum;
	if (UserNum <= 10) cout << cbrt((pow((UserNum + 1),2))) << "\n";
	else if (10 < UserNum and UserNum <= 15) cout << ((1 / ((pow(UserNum, 3)) + 2)) + b) << "\n";
	else if (UserNum > 15) cout << ((pow(UserNum, 2)) - (a * UserNum)) << "\n";
	return 0;
}

int main() {
	cout.precision(15);
	setlocale(LC_ALL, "ru");
	cout << solution3();
	return 0;
}

