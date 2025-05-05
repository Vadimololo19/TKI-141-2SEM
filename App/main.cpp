#include <iostream>
#include "../Library/queue.h"

/**
 * @brief Main function to demonstrate the functionality of the Queue library.
 */
int main() {
    Queue queue = {10, 20, 30};
    std::cout << "Initial queue: " << queue.toString() << std::endl;
    queue.enqueue(40);
    std::cout << "After enqueue(40): " << queue.toString() << std::endl;
    int dequeuedValue = queue.dequeue();
    std::cout << "Dequeued value: " << dequeuedValue << std::endl;
    std::cout << "After dequeue(): " << queue.toString() << std::endl;
    std::cout << "Peek: " << queue.peek() << std::endl;
    std::cout << "Is queue empty? " << (queue.isEmpty() ? "Yes" : "No") << std::endl;
    std::cout << "After queue << 50: " << queue.toString() << std::endl;
    int shiftedValue = 60;
    queue.enqueue(shiftedValue);
    std::cout << "Shifted value using operator>>: " << shiftedValue << std::endl;
    std::cout << "Final queue: " << queue.toString() << std::endl;
    Queue copiedQueue = queue;
    std::cout << "Copied queue: " << copiedQueue.toString() << std::endl;
    Queue movedQueue = std::move(copiedQueue);
    std::cout << "Moved queue: " << movedQueue.toString() << std::endl;
    std::cout << "Is copied queue empty after move? " << (copiedQueue.isEmpty() ? "Yes" : "No") << std::endl;
    return 0;
}
