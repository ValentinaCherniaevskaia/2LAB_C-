#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
    int grade;
    string s;
    typedef multimap<int, string> IntStringMMap;
    IntStringMMap coll;
    while (cin >> grade >> s) {
        if ((grade == 9 || grade == 10 || grade == 11) && sizeof s <= 50) {
            coll.insert(pair<int, string>(grade, s));
        }
    }
    IntStringMMap::iterator pos;
    for (pos = coll.begin(); pos != coll.end(); ++pos) {
        cout << pos->first << " " << pos->second << endl;
    }
    return 0;
}
