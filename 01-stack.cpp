#include <iostream>
#include <vector>

using namespace std;

class Stack {
public:
    vector<int> arr;

    void push(int num) {
        cout << num << endl;
        arr.push_back(num);
    }

    void pop() {
        int last = arr[arr.size() - 1];
        cout << last << endl;
        arr.pop_back();
    }
};

void printArray(vector<int> vector) {
    cout << "[";
    for (int i = 0; i < vector.size(); i++) {
        cout << vector[i] << " ";
    }
    cout << "]" << endl;
}

int main(int argc, const char * argv[]) {
    Stack stack;
    stack.push(5);
    printArray(stack.arr);
    stack.push(4);
    printArray(stack.arr);
    stack.push(3);
    printArray(stack.arr);
    stack.pop();
    printArray(stack.arr);
    stack.pop();
    printArray(stack.arr);
    stack.pop();
    printArray(stack.arr);
    return 0;
}