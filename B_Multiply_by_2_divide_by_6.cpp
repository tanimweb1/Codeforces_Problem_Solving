#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        int count = 0;
        if (x == 1)
        {
            cout << 0 << endl;
        }
        else if (x > 1 && x%6==0)
        {
            for (int i = 0; x != 1; i++)
            {
                  x = x / 6;
                count++;
               
            }
            cout << count << endl;
        }

        else
        {
            cout << -1<<endl;
        }
    }
    return 0;
}