/* Method Only Submission */
/*you are required to complete this method*/
int countZeroes(int data[MAX][MAX],int n) {
    int begin, end, mid, ans = 0;
    for (int i = 0; i < n; i++) {
        begin = 0;
        end = n;
        while (begin < end) {
            mid = (begin + end) / 2;
            if (data[i][mid] == 1) end = mid;
            else begin = mid + 1;
        }
        ans += end;
    }
    return ans;
}