#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n, t;
    cin >> n;
    set<int> a;
    for (int i = 0; i < n; ++i) {
        cin >> t;
        a.insert(t);
    }
    cout << a.size();
    return 0;
}
