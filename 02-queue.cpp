#include "iostream"
#include <vector>

using namespace std;

class Queue {
public:
    vector<int> arr;
        
public:
    void enqueued(int num) {
        std::cout << "Enqueued: " << num << endl;
        arr.push_back(num);
    }
    void dequeued() {
        std::cout << "Dequeued: " << arr[0] << endl;
        arr.erase(arr.begin());
    }
};

void printArray(vector<int> vector) {
    cout << "[";
    for (int i = 0; i < vector.size(); i++) {
        cout << vector[i] << " ";
    }
    cout << "]" << endl;
}

int main() {
    Queue queue;
    queue.enqueued(2);
    printArray(queue.arr);
    queue.enqueued(3);
    printArray(queue.arr);
    queue.enqueued(4);
    printArray(queue.arr);
    queue.dequeued();
    printArray(queue.arr);
    queue.dequeued();
    printArray(queue.arr);
    queue.dequeued();
    printArray(queue.arr);

    return 0;
}