#include <bits/stdc++.h>
using namespace std;

struct node
{
    int a = 0, b = 0, c = 0;
};

struct CustomCompare
{
    bool operator()(const node &n1, const node &n2)
    {
        if (n1.a <= n2.a)//ascending order
            return true;
        return false;
    }
};

int main()
{
    multiset<node, CustomCompare> s;
    node n1, n2, n3;
    n1.a = 43;
    n2.a = 23;
    n3.a = 1;
    s.insert(n1);
    s.insert(n2);
    s.insert(n3);

    for (auto i : s)
        cout << i.a << " ";
    cout << "\n";
    return 0;
}
