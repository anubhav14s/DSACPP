#include <iostream>
#include <queue>

using namespace std;

void explainQueue() {
    queue<int> q;

    q.push(1);      // {1}
    q.push(2);      // {1, 2}
    q.emplace(4);   // {1, 2, 4}

    q.back() += 5;

    cout << "Back: " << q.back() << endl;    // prints 9

    // Queue is {1, 2, 9}
    cout << "Front: " << q.front() << endl;  // prints 1

    q.pop();      // Queue becomes {2, 9}

    cout << "Front after pop: " << q.front() << endl; // prints 2

    cout << "Size: " << q.size() << endl;

    cout << "Is Empty: " << q.empty() << endl;
}

int main() {
    explainQueue();
    return 0;
}