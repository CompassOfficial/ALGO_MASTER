int lower_bd(int ara[], int n, int k){
	int l = 0, r = n - 1, ans = 0;
	while(l <= r){
		int mid = l + (r - l)/2;
		if(ara[mid] >= k){
			r = mid - 1;
			ans = mid;
		}
		else{
			l = mid + 1;
		}
	}
	return ans;
}
