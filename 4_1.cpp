#include <iostream>
using namespace std;

int main() {
	int liczby_pierwsze[3000];
	for (int i = 0; i < 3000; i++) {
		cin >> liczby_pierwsze[i];
	}
	
	int tab[20];
	int ile = 0;
	for (int i = 0; i < 20; i++) {
		cin >> tab[i];
	}
	
	for (int i = 0; i < 3000; i++) {
		int x = liczby_pierwsze[i];
		for (int j = 0; j < 20; j++) {
			if (tab[j] % x == 0) {
				ile++;
				break;
			}
		}
	}
	cout << ile;
	
	return 0;
}
