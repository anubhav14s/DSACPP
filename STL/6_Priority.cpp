#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void explainPQ() {

    // Max Heap (Default)
    priority_queue<int> pq;

    pq.push(5);      // {5}
    pq.push(2);      // {5, 2}
    pq.push(8);      // {8, 5, 2}
    pq.emplace(10);  // {10, 8, 5, 2}

    cout << "Top: " << pq.top() << endl;   // prints 10

    pq.pop();        // {8, 5, 2}

    cout << "Top after pop: " << pq.top() << endl;   // prints 8

    cout << "Size: " << pq.size() << endl;
    cout << "Is Empty: " << pq.empty() << endl;

    cout << "\nMinimum Heap\n";

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> minPQ;

    minPQ.push(5);      // {5}
    minPQ.push(2);      // {2, 5}
    minPQ.push(8);      // {2, 5, 8}
    minPQ.emplace(10);  // {2, 5, 8, 10}

    cout << "Top of Min Heap: " << minPQ.top() << endl;   // prints 2
}

int main() {
    explainPQ();
    return 0;
}