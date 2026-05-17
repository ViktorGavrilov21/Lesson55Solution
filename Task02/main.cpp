#include <iostream>
#include "logic.h"
using namespace std;

int main() {
	int x, n;

	cout << "Input your x and n: ";
	cin >> x >> n;

	int powered_number = power(x, n);

	cout << "Powered number is " << powered_number << endl;


	return 0;
}