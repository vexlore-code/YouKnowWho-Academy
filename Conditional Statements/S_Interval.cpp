#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double n;
    cin >> n;
    if (n > 0 && n <= 25)
    {
        cout << "Interval [0,25]" << endl;
    }
    else if (n > 25 && n <= 50)
    {
        cout << "Interval (25,50]" << endl;
    }
    else if (n > 50 && n <= 75)
    {
        cout << "Interval (50,75]" << endl;
    }
    else if (n > 75 && n <= 100)
    {
        cout << "Interval (75,100]" << endl;
    }
    else
    {
        cout << "Out of Intervals" << endl;
    }
    return 0;
}