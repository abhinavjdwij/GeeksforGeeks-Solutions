/*input
2
1
16
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long

int check(int n, int s) {
	while (n && s) {
		if (n % 10 != s % 10)
			return 0;
		n /= 10;
		s /= 10;
	}
	return 1;
}

int main() {
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		printf("%s\n", check(n, n*n) ? "Automorphic" : "Not Automorphic");
	}
	return 0;
}