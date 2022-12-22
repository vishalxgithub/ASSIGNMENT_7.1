#include <bits/stdc++.h>
using namespace std
  
int closestRight(vector<int> num, int k)
{
    int s = 0;
    int e = num.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (k == num[mid])
            return mid + 1;
        if (k < num[mid])
        {
            e = mid - 1;
        }
        else
            s = mid + 1;
        mid = s + (e - s) / 2;
    }
    return s + 1;
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> num(n);
    vector<int> que(k);
    for (int i = 0; i < n; i++)
        cin >> num[i];
    for (int i = 0; i < k; i++)
        cin >> que[i];

    for (int i = 0; i < k; i++)
        cout << closestRight(num, que[i]) << " ";
    cout << endl;
    return 0;
}
