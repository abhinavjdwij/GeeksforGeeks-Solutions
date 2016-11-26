/*input
1
371
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long

int check(int n) {
	int x = n, s = 0;
	while (n) {
		s += (int) pow((n%10), 3);
		n /= 10;
	}
	return (s == x);
}

int main() {
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		printf("%s\n", check(n) ? "Yes" : "No");
	}
	return 0;
}