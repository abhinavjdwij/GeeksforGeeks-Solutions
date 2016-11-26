/*input
2
12
4
*/

#include <stdio.h>
#define mod 1000000007

long long int data[110];

void pre() {
	int i;
	data[0] = data[1] = data[2] = 1;
	for (i = 3; i <= 100; i++)
		data[i] = (data[i-2] + data[i-3]) % mod;
}

int main() {
	pre();
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		printf("%lld\n", data[n]);
	}
	return 0;
}