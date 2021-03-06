#pragma GCC optimize "trapv"
#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3", "unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fab(a, b, i) for (int i = a; i < b; ++i)
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
#define f first
#define se second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
#define endl '\n'
#define blaze ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
typedef long long int ll;
//=======================
const int N = 2e6 + 13, M = N;
//=======================
int a[N];
int c, k, m, n, t, x, y;
//=======================

void insertionSort(int a[], int n)
{
    fab(1, n, i)
    {
        int temp = a[i], j = i;
        while (j > 0 and a[j - 1] > temp)
        {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = temp;
    }
    fab(0, n, i)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    blaze;
    int a[] = {7, 2, 4, 1, 5, 3};
    int n = sizeof(a) / sizeof(a[0]);
    insertionSort(a, n);
    return 0;
}

// Best Case - Sorted array - O(n)
// Worst Case - Reverse sorted array - O(n^2)