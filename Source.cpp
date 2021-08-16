#include<stdio.h>
int main() {
	int x;
	int px = 0;
	for (int x = 1; x <= 10000; x++) {
		for (int i = 1; i < x; i++) {
			if (x % i == 0) {
				px += i;
			}
			else continue;
		}
		if (px == x) {
			printf("%d ", px);
		}
		px = 0;
	}
	return 0;
}