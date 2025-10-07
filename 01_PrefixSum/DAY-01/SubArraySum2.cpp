#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main(){
    fast_io;
    //do with prefixSUm
    ll n,x;
    cin >> n >> x;
    vector<ll> arr(n);
    for(ll i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<ll> prefixSum(n+1, 0);
    for(ll i=1; i<=n; i++){
        prefixSum[i] = prefixSum[i-1] + arr[i-1];
    }
    map<ll,ll>st;
    ll count = 0;
    for(ll i=0; i<=n; i++){
        if(st.count(prefixSum[i]-x)){
            count += st[prefixSum[i]-x];
        }
        st[prefixSum[i]]++;
    }
    cout << count << endl;
}