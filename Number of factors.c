/*input
1
5
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long

int factors(int n) {
	int i, c = 0, s = (int) sqrt(n);
	for (i = 1; i*i <= n; i++) {
		if (n % i == 0)
			c += 2;
	}
	if (s*s == n) c -= 1;
	return c;
}

int main() {
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		printf("%d\n", factors(n));
	}
	return 0;
}