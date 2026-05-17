#include "logic.h"

int count_number_digits(int number) {
	if (number < 10) {
		return 1;
	}

	return count_number_digits(number / 10) + 1;
}