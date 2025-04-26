#include "queue.h"
#include <stdexcept>

/**
 * @brief Default constructor for Queue.
 */
Queue::Queue() : front(nullptr), rear(nullptr), size(0) {}

/**
 * @brief Constructor with initializer list.
 * @param initList Initializer list of integers.
 */
Queue::Queue(const std::initializer_list<int>& initList) : Queue() {
    for (int value : initList) {
        enqueue(value);
    }
}

/**
 * @brief Copy constructor for Queue.
 * @param other Another Queue object.
 */
Queue::Queue(const Queue& other) : Queue() {
    Node* current = other.front;
    while (current) {
        enqueue(current->data);
        current = current->next;
    }
}

/**
 * @brief Move constructor for Queue.
 * @param other Another Queue object (rvalue reference).
 */
Queue::Queue(Queue&& other) noexcept : front(other.front), rear(other.rear), size(other.size) {
    other.front = nullptr;
    other.rear = nullptr;
    other.size = 0;
}

/**
 * @brief Destructor for Queue.
 */
Queue::~Queue() {
    while (!isEmpty()) {
        dequeue();
    }
}

/**
 * @brief Add an element to the rear of the queue.
 * @param value Integer to be added.
 */
void Queue::enqueue(int value) {
    Node* newNode = new Node(value);
    if (isEmpty()) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    ++size;
}

/**
 * @brief Remove and return the element from the front of the queue.
 * @return The integer at the front of the queue.
 */
int Queue::dequeue() {
    if (isEmpty()) {
        throw std::runtime_error("Queue is empty");
    }
    Node* temp = front;
    int value = temp->data;
    front = front->next;
    delete temp;
    --size;
    if (isEmpty()) {
        rear = nullptr;
    }
    return value;
}

/**
 * @brief Get the element at the front of the queue without removing it.
 * @return The integer at the front of the queue.
 */
int Queue::peek() const {
    if (isEmpty()) {
        throw std::runtime_error("Queue is empty");
    }
    return front->data;
}

/**
 * @brief Check if the queue is empty.
 * @return True if the queue is empty, false otherwise.
 */
bool Queue::isEmpty() const {
    return size == 0;
}

/**
 * @brief Get the current size of the queue.
 * @return Size of the queue.
 */
size_t Queue::getSize() const {
    return size;
}

/**
 * @brief Serialize the queue to a string representation.
 * @return String representation of the queue.
 */
std::string Queue::toString() const {
    std::string result = "[";
    Node* current = front;
    while (current) {
        result += std::to_string(current->data);
        if (current->next) {
            result += ", ";
        }
        current = current->next;
    }
    result += "]";
    return result;
}

/**
 * @brief Overload assignment operator for copy assignment.
 * @param other Another Queue object.
 * @return Reference to the current Queue object.
 */
Queue& Queue::operator=(const Queue& other) {
    if (this != &other) {
        Queue temp(other);
        std::swap(front, temp.front);
        std::swap(rear, temp.rear);
        std::swap(size, temp.size);
    }
    return *this;
}

/**
 * @brief Overload assignment operator for move assignment.
 * @param other Another Queue object (rvalue reference).
 * @return Reference to the current Queue object.
 */
Queue& Queue::operator=(Queue&& other) noexcept {
    if (this != &other) {
        while (!isEmpty()) {
            dequeue();
        }
        front = other.front;
        rear = other.rear;
        size = other.size;
        other.front = nullptr;
        other.rear = nullptr;
        other.size = 0;
    }
    return *this;
}

/**
 * @brief Overload << operator to enqueue an element.
 * @param value Integer to be added.
 * @return Reference to the current Queue object.
 */
Queue& Queue::operator<<(int value) {
    enqueue(value);
    return *this;
}

/**
 * @brief Overload >> operator to dequeue an element.
 * @param value Reference to store the dequeued integer.
 * @return Reference to the current Queue object.
 */
Queue& Queue::operator>>(int& value) {
    value = dequeue();
    return *this;
}
