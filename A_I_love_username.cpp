#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mini = a[0];
    int maxi = a[0];
    int count = 0;
   
    
    for (int i = 1; i < n; i++)
    {
        if (a[i] > maxi || a[i] < mini)
        {
            count++;
            mini = min(a[i], mini);
            maxi = max(a[i], maxi);
        }
    }

    cout<<count<<endl;
}
