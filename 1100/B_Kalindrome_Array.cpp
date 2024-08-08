#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

bool check_kalindrome(vi a, int to_remove, int i, int j)
{
    bool flag = false;
    while (i < j)
    {
        if (a[i] == a[j])
        {
            i++;
            j--;
        }
        else if (a[i] == to_remove)
        {
            i++;
        }
        else if (a[j] == to_remove)
        {
            j--;
        }
        else
        {
            flag = true;
            break;
        }
    }
    return flag;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int i = 0, j = n - 1;
        int to_remove = -1;
        bool flag = false;
        while (i < j)
        {
            if (a[i] != a[j])
            {
                flag = check_kalindrome(a, a[i], i, j);
                if(!flag) break;
                flag = check_kalindrome(a, a[j], i, j);
                break;
            }
            else
            {
                i++;
                j--;
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}