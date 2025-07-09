#include <iostream>

// Represents a single node in the linked list
struct Node {
    int data;
    Node* next;

    // Constructor to initialize a node
    Node(int val) : data(val), next(nullptr) {}
};

// Represents the linked list
class LinkedList {
private:
    Node* head; // Pointer to the first node in the list

public:
    // Constructor
    LinkedList() : head(nullptr) {}

    // Destructor to free all nodes
    ~LinkedList() {
        Node* current = head;
        Node* nextNode = nullptr;
        while (current != nullptr) {
            nextNode = current->next;
            delete current;
            current = nextNode;
        }
        std::cout << "LinkedList destroyed." << std::endl;
    }

    // Adds a new node to the end of the list
    void add(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Displays the elements of the list
    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }
};

int main() {
    LinkedList list;

    // Add some elements to the list
    list.add(10);
    list.add(20);
    list.add(30);

    // Display the list
    std::cout << "Linked List elements: ";
    list.display();

    return 0;
}
