/* Method Only Submission */

/* Logic: Prefix Sum, If 2 indices have same sum then subarray between them has 0 sum. Find max length in O(n ^ 2);
*/

#define MAX(a, b) (a > b ? a : b)
int maxLen(int A[],int n) {
    int ans = 0, s = A[0];
    for (int i = 1; i < n; i++) {
        s += A[i];
        A[i] += A[i-1];
    }
    if (s == 0) return n;
    for (int i = 0; i < n; i++) {
        s += A[i];
        for (int j = i+1; j < n; j++) {
            if (A[i] == A[j])
                ans = MAX(ans, j-i);
        }
    }
    return ans;
}