#include <iostream>
#include <algorithm>
#include <stdbool.h>
#include <vector>
#include <set>
#include <map>
#include <cstring>
#include <utility>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int dpA, dpB;
    if (s[0] == 'A')
        dpA = 0, dpB = 1;
    else
        dpA = 1, dpB = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == 'A')
        {
            int tmpA = min(dpA, dpB + 1);
            int tmpB = min(dpA + 1, dpB + 1);
            dpA = tmpA, dpB = tmpB;
        }
        else
        {
            int tmpA = min(dpA + 1, dpB + 1);
            int tmpB = min(dpA + 1, dpB);
            dpA = tmpA, dpB = tmpB;
        }
    }
    cout << dpA;
}
