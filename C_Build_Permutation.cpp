#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0), cin.tie(0)
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define f2(i, n) for (int i = 1; i < n; i++)
#define endl "\n"
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define pi pair<int, int>
#define all(x) x.begin(), x.end()
#define ff first
#define ss second
#define int long long
#define INF 1000000000
#define mod 1000000007
int Ceil(int a, int b)
{
    return a / b + (a % b != 0);
}

void sol()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    n--;
    while (1)
    {
        int k = sqrt(n);
        int m;
        if (k * k == n)
        {
            m = n;
        }
        else
        {
            k++;
            m = k * k;
        }
        int c = m - n; 
        int flow = n;
        for (int i = c; i <= n; i++)
        {
            arr[i] = flow;
            flow--;
        }
        // int a[100];
        n = c-1;
        if(n<=0){
            break;
        }
    }

    for (auto it : arr)
        cout << it << " ";
    cout << endl;
}

int32_t main()
{
    FastIO;
    int tt;
    tt = 1;
    cin >> tt;
    while (tt--)
    {
        sol();
    }
}