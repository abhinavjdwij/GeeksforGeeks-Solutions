/*input
1
4
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
*/

/* Rotate a matrix 90 degree anticlockwise in O(1) auxiliary space
 -> Flip each row individualy (i.e swap (data[i][j], data[i][n-j-1]))
 	Transpose the matrix
*/

/*~~~~~~~~~~~~~~~~~~~~dwij28 == Abhinav Jha~~~~~~~~~~~~~~~~~~~~*/


#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define MAX(a, b) ((a > b) ? a : b)
#define MIN(a, b) ((a < b) ? a : b)
#define set_bit(n, x, i) (n ^ ((-x ^ n) & (1 << i)))
#define get_bit(n, i) ((n >> i) & 1) 
using namespace std;
 
template<typename T>void scan(T&x){bool n=false;register T c=getchar();x=0;if(c=='-'){n=true;c=getchar();}for(;(c>47&&c<58);c=getchar()){x=(x<<1)+(x<<3)+c-48;}if(n){x*=-1;}}
template<typename T>void allocate(T **x,T n){*x=(T*)malloc(sizeof(T)*n);}

int main() {
	int t, n, data[110][110];
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				scanf("%d", &data[i][j]);
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n/2; j++) {
				swap(data[i][j], data[i][n-j-1]);
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i; j++) {
				swap(data[i][j], data[j][i]);
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				printf("%d ", data[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}