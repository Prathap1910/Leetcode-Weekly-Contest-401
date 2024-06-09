class Solution {
public:
    const int MOD = 1'000'000'007;
int valueAfterKSeconds(int n, int k) {
    vector<int> a(n, 1);
    for (int i= 0; i < k;i++) {
     vector<int> ne(n, 1);
        ne[0] = a[0];
        for (int i = 1; i < n; ++i) {
            ne[i] = (ne[i-1] + a[i]) % MOD;
        }
        a = ne;
    }
    
    return a[n-1];
}
};
