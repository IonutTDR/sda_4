#include <iostream>
#include <iomanip>
#include "Module.h"
using namespace std;

void read(Sequence& s) {

	cout << "Lungimea sirului este: ";
	cin >> s.n;
	while (s.n < 1 || s.n > DIM) {
		cout << "Lungimea sirului trebuie sa aparatina intervalului [1, 50]\nLungimea sirului este: ";
		cin >> s.n;
	}

	for (int i = 0; i < s.n; i++) {
		cout << "x[" << i << "] = ";
		cin >> s.x[i];
	}
}

void print(Sequence s) {
	cout << "Elementele sunt: \n";
	for (int i = 0; i < s.n; i++) {
		if (i % 10 == 0) cout << "\n";
		cout << setw(5) << s.x[i];
	}
	cout << "\n";
}

void recursiveBubbleSort(Sequence& s, int n) {
	if (n == 1) return;

	for (int i = 0; i < n - 1; i++)
		if (s.x[i] > s.x[i + 1])
			swap(s.x[i], s.x[i + 1]);
	recursiveBubbleSort(s, n - 1);
}