/*input
1
4
abba
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long

int main() {
	int t, n, i, flag;
	char s[110];
	scanf("%d", &t);
	while (t--) {
		scanf("%d%s", &n, s);
		flag = 1;
		for (i = 0; i < n/2; i++) {
			if (s[i] != s[n-i-1]) {
				flag = 0;
				break;
			}
		}
		printf("%s\n", flag ? "Yes" : "No");
	}
	return 0;
}