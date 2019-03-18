/*input
1101011011
10011

*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> PII;
typedef pair<ll , ll> PLL;
typedef long double ld;

#define pb push_back
#define all(c) c.begin(),c.end()
#define allr(c) c.rbegin(),c.rend()
int mod = 1000000007;
#define PI 3.14159265
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl;
#define MAX 100001

template < typename T > T GCD(T a, T b)            { ll t; while(a) { t = a; a = b % a; b = t; } return b; }
template < typename T > string toString(T a)       { return to_string(a); }
template < typename T > void toInt(string s, T &x) { stringstream str(s); str >> x;}
inline int add(ll a, ll b) {a += b; if (a < 0) a += mod; return a;}
inline int sub(ll a, ll b) {a -= b; if (a < 0) a += mod; return a;}
inline int mul(ll a, ll b) {return (a * 1ll * b) % mod;}
inline int pwr(ll x, ll y) {
    int ans = 1 % mod;
    while (y) {
        if (y & 1) ans = mul(ans, x);
        x = mul(x, x);
        y >>= 1;
    }
    return ans;
}
inline int inv(int a) {return pwr(a, mod - 2);}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string data, divisor;
    cin >> data >> divisor;

    int n = data.size();
    int m = divisor.size();
    for (int i = 0; i < m - 1; i++) {
        data.insert(data.size(), 1, '0');
    }
    n = data.size();
    int ind = 0;
    while (n - ind >= m) {
        if (data[ind] == '1') {
            for (int i = ind; i < ind + m; i++) {
                data[i] = (data[i] != divisor[i - ind]) + 48;
            }
        }
        ind++;
    }
    string crc = data.substr(n - m, m);
    while (crc[0] == '0') {
        crc.erase(crc.begin());
    }
    cout << crc << endl;
    

    return 0;
}
