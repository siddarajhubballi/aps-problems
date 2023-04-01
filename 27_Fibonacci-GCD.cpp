#define _CRT_SECURE_NO_WARNINGS
//#pragma comment(linker, "/STACK:100000000")
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstring>
#include <set>
#include <stdio.h>
#include <vector>
#include <map>


#define ll long long
#define ld long double
#define f(i, a, b) for(int i=(int)(a); i<(int)(b); ++i)
#define fn(i, b) for(int i=0; i<(int) (b); i++)
#define fz(i, a, b) for (int i=(int)(a); i>=(int)(b); --i)
#define mp make_pair
#define pii pair<int, int>
#define pb push_back
#define bg begin()
#define ed end()
#define pi 3.141592653589793238462643383279
#define sqr(A) A*A*1.0
ll gcd(ll a, ll b) {
    while (a && b) {
        if (a > b) a %= b; else b %= a;
    }
    return a + b;
}

ll lcm(ll a, ll b) { return (((a*b) / gcd(a, b))); }

int phi(int n){
    int result = n;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) n /= i;
            result -= result / i;
        }
    }
    if (n > 1) result -= result / n;
    return result;
}

int catalan(unsigned int n){
    int c[100];
    c[0] = c[1] = 1;
    f(i, 2, n) {
        f(k, 0, i)
            c[i] += c[k] * c[i - 1 - k];
    }
    return c[n];
}

#define MAX 1000100
#define INF 1000000007
#define eps 1e-9
#define ls (v << 1)
#define rs ((v << 1)+1)
using namespace std;
/*

int n;
int last = 0;
int a[10000];
int p = 0;
ll dp[1000][1000];

ll cnt(int pos, int last) {
    if (pos == 0) {
        //for (int j = 0; j < all; j++) cout << a[j];
        //cout << endl;
        p++;
        return 1;
        
    }
    if (dp[pos][last]) return dp[pos][last];
    ll x = 0;
    for (int i = last; i <= 9; i++) {
        a[pos] = i;
        x += cnt(pos - 1, i);
    }
    return dp[pos][last]=x;
}
int R[100];
int kk = 0;

void get(int pos, int last, int len, int numb){
    if (pos == len) {
        //kk++;
        if (kk == numb) {
            for (int j = 0; j < len; j++) cout << R[j];
            cout << endl;
//            system("pause");
            exit(0);
        }
        return;
    }

    //if (cnt(len - pos, last) < numb && pos>len/2) return;
    for (int i = last; i <= 9; ++i) {
        R[pos] = i;
        //kk++;
        int s = cnt(len - pos-1, i);
        get(pos + 1, i, len, numb);
    }
}
*/
#define vll vector<ll>
#define vpii vector<pii>
#define vvll vector<vll > 

vvll a;

vvll mul(vvll a, vvll b)
{
    vvll c;
    c.resize(2);
    for (int i = 0; i < 2; ++i) c[i].assign(2, 0);

    for (int p = 0; p < 2; ++p)
    for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
        c[i][j] = (c[i][j] + a[i][p] * b[p][j]) % INF;
    return c;
}

vvll power(vvll a, ll y)
{
    if (y == 1) return a;
    if (y % 2) return mul(a, power(a, y - 1));
    vvll x = power(a, y / 2);
    return mul(x, x);
}
ll b[MAX];
int n;

int main()
{
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    
    cin >> n;
    fn(i, n) scanf("%lld", b + i);
    ll g = b[0];
    for (int i = 1; i < n; i++) g = gcd(g, b[i]);
    a.resize(3);
    a[0].resize(2);

    a[1].resize(2);
    a[0][0] = a[0][1] = a[1][0] = 1;
    a[1][1] = 0;
    if (g>1) a = power(a, g - 1);
    ll ans = a[0][0];
    ans = (ans % INF);
    cout << ans << endl;

    

    return 0;
}
