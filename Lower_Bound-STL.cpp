
// https://www.hackerrank.com/challenges/cpp-lower-bound/problem?isFullScreen=true

// Time Complexity: N
// Space Complexity:

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q, num;

    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        v.push_back(num);
    }

    cin >> q;
    vector<int>::iterator low;
    while (q > 0)
    {
        cin >> num;
        low = lower_bound(v.begin(), v.end(), num); // Complexity N
        if (*low != num)
        {
            cout << "No ";
        }
        else
        {
            cout << "Yes ";
        }
        cout << (low - v.begin()) + 1 << endl;

        q--;
    }

    return 0;
}
