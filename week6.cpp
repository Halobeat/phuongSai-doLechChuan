#include <iostream>
#include <cmath>
#define MAX 50
using std::cout; using std::cin; using std::endl;
double phuongSai(double data[MAX], double size[MAX], int& n){
	int total{}; double median{};
	for (int i = 0; i< n; i++) {
		total += size[i];
	}
	for (int i = 0; i < n; i++) {
		median += data[i];
}
	double phuongsai{};
	median = median/double(total);
	for (int i = 0; i < n; i ++) {
		phuongsai +=size[i] * data[i] * data[i];
	}
	phuongsai = (phuongsai/total) - median*median;
	return phuongsai;
}

void arrayInput(double data[MAX], double size[MAX], int& n) {
	while (true) {
	cout<<"Input size of data n: ";
	cin >> n;
	if (n < 0) {cout<<"Try again, please"<<endl;}
	else {break;}
	}
	cout<< "Input data from 1 to n "<<endl;
	for (int i = 0; i < n; i++) {
		cin >> data[n];
	}
	cout << "Input frequency for each data from 1 to n: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> size[n];
	}
}

void arrayOutput(double data[MAX], double size[MAX], int n) {
	for (int i = 0; i < n; i++) {
		cout<<data[i] << " ";
	}
	for (int i = 0; i < n; i++) {
		cout<<size[i]<< " ";
	}
}

int main() {
	double data[MAX]; double size[MAX]; int n{};
	arrayInput(data, size, n);
	arrayOutput(data, size, n);
}
