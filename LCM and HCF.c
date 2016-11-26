/*input
2
5 10
14 8
*/

#include <stdio.h>

void solve(int a, int b) {
	int p = a*b, temp, g;
	while (b) {
		temp = a;
		a = b;
		b = (temp % b);
	}
	g = a;
	printf("%d %d\n", p / g, g);
}

int main() {
	int t, a, b;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &a, &b);
		solve(a, b);
	}
	return 0;
}