#include <iostream>
#include <clocale>
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

int main() {
	setlocale(LC_ALL, "ru");
	cout << solution2();
	return 0;
}

