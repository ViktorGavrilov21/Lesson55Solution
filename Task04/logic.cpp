int recursion(int n) {
	if (n == 0) {
		return n;
	}

	return recursion(n / 10) + (n % 10);
}

bool equals(int n, int s) {
	if (n < 0 || s < 0) {
		return false;
	}
	return recursion(n) == s;
}


