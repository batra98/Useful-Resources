#include <bits/stdc++.h>
using namespace std;
int main()
{
    //declare
    set<int> s;

    //clear
    s.clear();

    //insert
    s.insert(1);
    s.insert(32);
    s.insert(32321);
    s.insert(14454);

    //size
    cout << s.size() << "\n";

    //iterate
    for (auto it : s)
        cout << it << " ";
    cout << "\n";

    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    cout << "\n";

    //delete
    s.erase(1);
    s.erase(s.begin());

    //search
    if (s.count(32)) //==1 if present
        cout << "Present\n";
    if (s.find(33) != s.end())
        cout << "Present\n";

    //binary search
    cout << *(s.lower_bound(3)) << "\n";

    //min/max
    cout << (*s.begin()) << "\n";
    cout << (*s.rbegin()) << "\n";

    return 0;
}