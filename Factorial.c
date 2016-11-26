/*input
1
1
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long

ll fac[19];

void pre() {
	int i;
	fac[0] = 1;
	for (i = 1; i <= 18; i++)
		fac[i] = i*fac[i-1];
}

int main() {
	pre();
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		printf("%lld\n", fac[n]);
	}
	return 0;
}