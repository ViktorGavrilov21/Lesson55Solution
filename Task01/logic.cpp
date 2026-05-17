#include "logic.h"

int recursion(int number) {
	if (number < 10) {
		return 1;
	}

	return recursion(number / 10) + 1;
}

int count_number_digits(int number) {
	number = number < 0 ? -number : number;

	return recursion(number);
}