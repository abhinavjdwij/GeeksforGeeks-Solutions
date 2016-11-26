/* Function Only Code */
int thirdLargest(int a[],int n) {
    int x, y, z;
    x = y = z = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] > x) {
            z = y;
            y = x;
            x = a[i];
        }
        else {
            if (a[i] > y) {
                z = y;
                y = a[i];
            }
            else if (a[i] > z) {
                z = a[i];
            }
        }
    }
    return z;
}