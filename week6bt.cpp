#include <iostream>
#include <cmath>
using std::cout; using std::cin; using std::endl;

void inputArray(int list[], int&n) {
	cout << "Input your array size n: ";
	cin >> n;
	cout  << ".\n";
	cout << "Input your numbers from 1 to n" << endl;
	for (int i = 0; i < n; i++) {
		cin >> list[i];
	}
}

int main() {
	int numbers[10]; int n{};
	inputArray(numbers, n);
}
