#include <iostream>
#include "logic.h"
using namespace std;


int main() {
	int n, s;
	
	cout << "Input n and s: ";
	cin >> n >> s;

	bool result = equals(n, s);

	string answer = result ? "Yes" : "No";

	cout << answer << endl;


	return 0;
}