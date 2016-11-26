/*input
1
5
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long

int prime(int n) {
	int i;
	if (n < 2) return 0;
	for (i = 2; i*i <= n; i++)
		if (n % i == 0)
			return 0;
	return 1;
}

int main() {
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		printf("%s\n", prime(n) ? "Yes" : "No");
	}
	return 0;
}