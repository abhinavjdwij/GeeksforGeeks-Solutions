/*You need to complete this function */
int bin_search(int arr[], int low, int high, int k) {
	if (low > high) return -1;
	int mid = (low + high) / 2;
	if (arr[mid] == k) return mid;
	else if (arr[mid] > k) bin_search(arr, low, high-1, k);
	else bin_search(arr, low+1, high, k);
}