#include <iostream>
#include <algorithm> 
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
	for (int i = 0; i < 200; i++) {
		cin >> n;
		int m = skrot(n);
		int NWD = __gcd(m, n);
		if (NWD == 7) {
			cout << n << endl;
		}
	}

	return 0;
}
