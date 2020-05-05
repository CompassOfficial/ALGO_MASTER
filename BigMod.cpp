#include<bits/stdc++.h>
typedef long long ll;
ll bigmod(ll a,ll b,ll m) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1){//(b%2)
            res = res * a % m;
        }
        a = a * a % m;
        b >>= 1;//b/=2;
    }
    return res;
}
