#pragma once
#include <string>
#include <initializer_list>

/**
 * @brief Class Queue represents a queue data structure for integers.
 */
class Queue {
private:
    /**
     * @brief Internal structure to represent a node in the queue.
     */
    struct Node {
        int data;       
        Node* next;     

        /**
         * @brief Constructor for Node.
         * @param value Data to be stored in the node.
         */
        Node(int value) : data(value), next(nullptr) {}
    };

    Node* front;        
    Node* rear;         
    size_t size;        

public:
    /**
     * @brief Default constructor for Queue.
     */
    Queue();

    /**
     * @brief Constructor with initializer list.
     * @param initList Initializer list of integers.
     */
    Queue(const std::initializer_list<int>& initList);

    /**
     * @brief Copy constructor for Queue.
     * @param other Another Queue object.
     */
    Queue(const Queue& other);

    /**
     * @brief Move constructor for Queue.
     * @param other Another Queue object (rvalue reference).
     */
    Queue(Queue&& other) noexcept;

    /**
     * @brief Destructor for Queue.
     */
    ~Queue();

    /**
     * @brief Add an element to the rear of the queue.
     * @param value Integer to be added.
     */
    void enqueue(int value);

    /**
     * @brief Remove and return the element from the front of the queue.
     * @return The integer at the front of the queue.
     */
    int dequeue();

    /**
     * @brief Get the element at the front of the queue without removing it.
     * @return The integer at the front of the queue.
     */
    int peek() const;

    /**
     * @brief Check if the queue is empty.
     * @return True if the queue is empty, false otherwise.
     */
    bool isEmpty() const;

    /**
     * @brief Get the current size of the queue.
     * @return Size of the queue.
     */
    size_t getSize() const;

    /**
     * @brief Serialize the queue to a string representation.
     * @return String representation of the queue.
     */
    std::string toString() const;

    /**
     * @brief Overload assignment operator for copy assignment.
     * @param other Another Queue object.
     * @return Reference to the current Queue object.
     */
    Queue& operator=(const Queue& other);

    /**
     * @brief Overload assignment operator for move assignment.
     * @param other Another Queue object (rvalue reference).
     * @return Reference to the current Queue object.
     */
    Queue& operator=(Queue&& other) noexcept;

    /**
     * @brief Overload << operator to enqueue an element.
     * @param value Integer to be added.
     * @return Reference to the current Queue object.
     */
    Queue& operator<<(int value);

    /**
     * @brief Overload >> operator to dequeue an element.
     * @param value Reference to store the dequeued integer.
     * @return Reference to the current Queue object.
     */
    Queue& operator>>(int& value);
};
