#include<iostream>
using namespace std;
int cubenumber(int);
int main() {
	int number;
	cout << "Enter a number to calculate the cube of the number :\n";
	cin >> number;
	cout << "The cube of the number is \t" << cubenumber(number)<< endl;
	system("pause");
}
int cubenumber(int number) {
	return number * number * number;
}