#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        long long b, x, kq = 999999999999999999;
        cin >> b >> x;
        vector<long long> a(b);
        for (auto &i : a)
            cin >> i;
        long long r = 0, l = 0, sum = 0;
        while (r < b && l < b)
        {
            sum += a[r];
            r++;
            while (sum > x)
            {
                kq = min(kq, r - l);
                sum -= a[l];
                l++;
            }
        }
        if (kq == 999999999999999999)
            cout << -1 << endl;
        else
            cout << kq << endl;
    }
}
