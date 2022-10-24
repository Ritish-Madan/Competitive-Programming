#include"../helpers/bitstandards.h"

using namespace std;

int main() {
    // Pairs
    pair<int, int> p(1,1);
    cout << p.first << endl;

    pair <char, int> p2;
    p2 = make_pair('c', 2);
    cout << p2.first << " " << p2.second << endl;

    // iterator on set
    set<int> set1;
    for(int i = 0; i <= 5; i++){
        set1.insert(i);
    }

    // Initialize an iterator
    set<int>::iterator set_iterator;
    for(set_iterator=set1.begin(); set_iterator!=set1.end(); set_iterator++){
        cout << *set_iterator << endl;
    }


    // Iterator on map
    map<int, int> map1;
    for(int i = 0; i <= 5; i++){
        map1[i] = i + 1;
    }

    map<int, int>::iterator itr1;
    for(itr1=map1.begin(); itr1!=map1.end(); itr1++){
        cout << itr1->first << " " << itr1 -> second << endl;
    }

    return 0;
}