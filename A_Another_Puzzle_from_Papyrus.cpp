#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                flag = false;
                break;
            }
        }
        int count = 0;
        if (!flag)
        {
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            count += c;
            bool flag2 = true;
            for (int i = 0; i < n; i++)
            {
                if (b[i] <= a[i])
                {
                    count += a[i] - b[i];
                }
                else
                {
                    cout << -1 << endl;
                    flag2 = false;
                    break;
                }
            }
            if (flag2)
            {
                cout << count << endl;
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                count += a[i] - b[i];
            }
            cout << count << endl;
        }
    }
}