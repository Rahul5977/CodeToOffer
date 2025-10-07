#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fast_io;
    ll n,q;
    cin >> n >> q;
    vector<ll> arr(n);
    for(ll i=0; i<n; i++) {
        cin >> arr[i];
    }
    vector<ll> prefixSum(n+1, 0);
    for(ll i=1; i<=n; i++) {
        prefixSum[i] = prefixSum[i-1] + arr[i-1];
    }

    while(q--) {
        ll l, r;
        cin >> l >> r;
        cout << prefixSum[r] - prefixSum[l-1] << endl;
    }

    return 0;
}