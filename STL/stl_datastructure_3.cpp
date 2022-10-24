#include"../helpers/bitstandards.h"

using namespace std;

struct Interval{
    int st;
    int et;
};

bool compare(Interval i1, Interval i2){
    return i1.st < i2.st;
}

int main() {
    Interval arr[] = {{6,4}, {3,4}, {4,6}, {8,13}};
    // sorting the Itervals on the basis of start time
    sort(arr, arr + 4, compare);
    
    for(int i = 0; i < 4; i++){
        cout << arr[i].st << " : " << arr[i].et << endl;
    }

    int arr1[] = {1,2,3,4,5,6};

    // Binary Search
    cout << binary_search(arr1, arr1 + 6, 3) << endl;
    cout << endl;

    cout << lower_bound(arr1, arr1 + 6, 2) - arr1 << endl;
    cout << upper_bound(arr1, arr1 + 6, 2) - arr1 << endl;

    // Swap
    int x = 10;
    int y = 12;
    swap(x, y);
    cout << x << endl;
    cout << y << endl;
    return 0;
}