
#include "FillArray.h"

void FillArray(int a[], int n) {
	int k = 0;
	for (int i = 0; i < n; i++) {
		++k;
		a[i] = k;
	}
}