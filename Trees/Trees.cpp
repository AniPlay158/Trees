#include <iostream>
#include <set>
using namespace std;

int main()
{
    srand(time(0));
    set<int> mySet;

    mySet.insert(20);
    mySet.insert(50);
    mySet.insert(790);
    mySet.insert(15);
    mySet.insert(888);

    cout << "Elements: ";
    for (const auto& element : mySet) {
        cout << element << " ";
    }
    cout << "\n";

    mySet.erase(50);
    mySet.erase(15);

    cout << "Set elements after removal: ";
    for (const auto& element : mySet) {
        cout << element << " ";
    }
    cout << "\n";
}