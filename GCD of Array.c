/*input
1
2
5 10
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int gcd(int a, int b) {
	while (b) {
		int c = a;
		a = b;
		b = (c % b);
	}
	return a;
}

int main() {
	int t, n, i, ans, x;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &ans);
		for (i = 1; i < n; i++) {
			scanf("%d", &x);
			ans = gcd(ans, x);
		}
		printf("%d\n", ans);
	}
	return 0;
}