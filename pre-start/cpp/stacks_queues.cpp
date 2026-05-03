#include <iostream>
#include <queue>
#include <stack>

int main() {
    // STACK - LIFO (Last In First Out)
    std::stack<int> myStack;
    myStack.push(3);
    myStack.push(5);
    myStack.push(1);

    std::cout << "Stack top element: " << myStack.top() << "\n";
    std::cout << "Stack size: " << myStack.size() << "\n";
    std::cout << "Popping element: " << myStack.top() << "\n";
    myStack.pop();
    std::cout << "Stack top element: " << myStack.top() << "\n";
    std::cout << "Stack size: " << myStack.size() << "\n";
    std::cout << "---\n";

    // QUEUE - FIFO (First In First Out)
    std::queue<int> myQueue;
    myQueue.push(3);
    myQueue.push(5);
    myQueue.push(1);

    std::cout << "Queue front element: " << myQueue.front() << "\n";
    std::cout << "Queue back element: " << myQueue.back() << "\n";
    std::cout << "Queue size: " << myQueue.size() << "\n";
    std::cout << "Popping front element: " << myQueue.front() << "\n";
    myQueue.pop();
    std::cout << "Queue front element: " << myQueue.front() << "\n";
    std::cout << "Queue back element: " << myQueue.back() << "\n";
    std::cout << "Queue size: " << myQueue.size() << "\n";

    return 0;
}
