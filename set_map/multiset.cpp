#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(32);
    s.insert(32321);
    s.insert(14454);

    //count
    cout << s.count(1) << "\n";

    //delete
    s.erase(s.lower_bound(1)); //eraseing by iterator erases only 1 occurence
    s.erase(1);                //delete all occurences of 1

    return 0;
}
