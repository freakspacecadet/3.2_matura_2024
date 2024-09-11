#include <iostream>
using namespace std;

int pow(int base, int exp) {
	int temp = base;
	if (exp == 0) {
		return 1;
	}
	else {
		for (int i = 1; i < exp; i++) {
		temp = temp * base;
	}
	return temp;
	}
}

int skrot(int n) {
	int i = 0;
	int m = 0;
	while (n != 0) {
		int r = n % 2;
		if (r == 1) {
			m += ((n % 10) * pow(10, i));
			i++;
		}
		n -= (n % 10);
		n = n / 10;
	}
	return m;
}

int main() {
	int n;
	cin >> n;
	
	int m = skrot(n);
	cout << m;

	
	return 0;
}
