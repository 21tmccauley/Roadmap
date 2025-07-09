# Project: [Your Project Title]

**Date:** `July 9, 2025`
**Language:** `C++`

---

## 📝 Description

*Single Linked List implementation in C++ as an introduction to simple data strucutres and pointers"*

---

## 💻 Code

```cpp
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
````

-----

## 🧠 Explanation

### High-Level Overview

*Creates a data structure that doest not occupy a contiguous section of memory and can be traversed in one direction*

### Step-by-Step Breakdown

1.  **Component/Function 1 (e.g., `Node` struct):**

      * **Purpose:** Acts as a publically available class that represents one item in the list.
      * **Logic:** It is made up of an int that holds the actual value and a pointer to the next object in the lists location.

2.  **Component/Function 2 (e.g., `LinkedList` class):**

      * **Purpose:** Defines the structure and behavior of the LinkedList data structure
      * **Logic:** It contains a pointer to the head of the list

3.  **Component/Function 3 (e.g., `add` method):**

      * **Purpose:** Adds a new item to the list
      * **Logic:** The int to be added is passed in as an argument to the function. A new node object is created to hold this value. A check is performed to see if this lists head is a nullptr which implies it is an empty list. If this is the case the newly created node is the head. If it is not, then the list is traversed until the current node points to a nullptr impling that it is the end of the list.

4.  **Component/Function 4 (e.g., `display` method):**

      * **Purpose:** Iterates through the items in the list and displays them
      * **Logic:** Creates a pointer pointed to the head of the list. It iterates through the list, prints out the data in each node and continues until it reaches nullptr signifying the end of the list
   

-----

## 💡 Key Concepts

  * **Concept 1 (e.g., Pointers):** Data type that point to a location in memory where something is stored
  * **Concept 3 (e.g., Structs):** Programmers generally use struct for simple data containers, like our Node, where you just want to group a few variables together. They use class for more complex objects that have both data and functions (methods) that operate on that data, especially when you want to control access to that data (a concept called encapsulation).

-----

## 🤔 Challenges & Solutions


  * **Challenge:** I had forgotten how pointers and dereferencing worked
  * **Solution:** I levereged AI to act as a tutor while I created the project

-----

## 🚀 Next Steps

  * [ ] Add a `remove()` method.
  * [ ] Convert the linked list to a C++ template to handle different data types.
  * [ ] Implement a doubly linked list.

<!-- end list -->
