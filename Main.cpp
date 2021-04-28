#include "Module.h"
#include <iostream>

using namespace std;

int main() {
	Sequence s;

	read(s);

	print(s);

	recursiveBubbleSort(s, s.n);

	print(s);

	return 0;
}