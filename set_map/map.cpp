#include <bits/stdc++.h>
using namespace std;
int main()
{
    //declare
    map<int, int> m; //key,val

    //clear
    m.clear();

    //insert
    m.insert(pair<int, int>(1, 1));
    m[3435] = 12;
    m[6564] = 32;
    m[2312] = 111;

    //size
    cout << m.size() << "\n";

    //modify
    m[1]=2543;
    m[1]=32;

    //iterate
    for (auto i : m)
        cout << i.first << " " << i.second << "\n";

    for (auto it = m.begin(); it != m.end(); it++)
        cout << it->first << " " << it->second << "\n";

    //delete
    m.erase(1);
    m.erase(m.begin());

    //search
    if (m.count(1)) //count of k,v pairs where k=1
        cout << "Present\n";
    if (m.find(3435) != m.end())
        cout << "Present\n";

    //binary search
    auto it=m.lower_bound(1);
    cout << it->first << " " << it->second << "\n";

    //min/max
    cout << (m.begin())->first << " " << (m.begin())->second << "\n";
    cout << (m.rbegin())->first << " " << (m.rbegin())->second << "\n";

    return 0;
}