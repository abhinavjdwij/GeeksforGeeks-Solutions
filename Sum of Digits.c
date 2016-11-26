/*input
2
123
45
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long

int solve(int n) {
	int s = 0;
	while (n) {
		s += (n % 10);
		n /= 10;
	}
	return s;
}

int main() {
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		printf("%d\n", solve(n));
	}
	return 0;
}