/*input
1
7
3 0 3 3 3 0 3 3 3 3 3 3 0 3 2 0 0 3 3 1 0 3 3 0 3 3 3 0 0 3 0 0 0 0 0 3 3 0 3 3 0 3 0 0 3 3 3 0 3
2
4
3 0 0 0 0 3 3 0 0 1 0 3 0 2 3 3 
3
0 3 2 3 0 0 1 0 0
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

bool visited[25][25];
int t, n, graph[25][25];

bool solve(std::pair<int, int> src) {
	int i = src.first, j = src.second;
	if (i < 1 || j < 1 || i > n || j > n) return false;
	if (graph[i][j] == 2) return true;
	if (graph[i][j] == 0 || visited[i][j]) return false;
	visited[i][j] = true;
	return solve(mp(i-1, j)) || solve(mp(i+1, j)) || solve(mp(i, j-1)) || solve(mp(i, j+1));
}

int main() {
	scanf("%d", &t);
	while (t--) {
		memset(visited, false, sizeof(visited));
		scanf("%d", &n);
		std::pair<int, int> src;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				scanf("%d", &graph[i][j]);
				if (graph[i][j] == 1) {
					src.first = i;
					src.second = j;
				}
			}
		}
		printf("%d\n", solve(src));
	}
	return 0;
}