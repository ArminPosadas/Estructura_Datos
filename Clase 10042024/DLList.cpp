#ifndef DLLIST_H
#define DLLIST_H

#include <iostream>

template<typename T>
class DLList {
public:
    struct Node {
        T data;
        Node* next;
        Node* prev;

        explicit Node(const T& data, Node* next = nullptr, Node* prev = nullptr)
                : data(data), next(next), prev(prev) {}
    };

    class iterator {
    public:
        explicit iterator(Node* node = nullptr) : node(node) {}

        T& operator*() {
            return node->data;
        }

        iterator& operator++() {
            if (node) {
                node = node->next;
            }
            return *this;
        }

        iterator& operator--() {
            if (node) {
                node = node->prev;
            }
            return *this;
        }

        bool operator==(const iterator& other) const {
            return node == other.node;
        }

        bool operator!=(const iterator& other) const {
            return node != other.node;
        }

    private:
        Node* node;
    };

    DLList() : head(nullptr), tail(nullptr) {}

    ~DLList() {
        clear();
    }

    iterator begin() {
        return iterator(head);
    }

    iterator end() {
        return iterator();
    }

    void push_front(const T& data) {
        Node* newNode = new Node(data, head);
        if (head) {
            head->prev = newNode;
        }
        head = newNode;
        if (tail == nullptr) {
            tail = head;
        }
    }

    void push_back(const T& data) {
        Node* newNode = new Node(data, nullptr, tail);
        if (tail) {
            tail->next = newNode;
        }
        tail = newNode;
        if (head == nullptr) {
            head = tail;
        }
    }

    void pop_front() {
        if (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
            if (head) {
                head->prev = nullptr;
            } else {
                tail = nullptr;
            }
        }
    }

    void pop_back() {
        if (tail) {
            Node* temp = tail;
            tail = tail->prev;
            delete temp;
            if (tail) {
                tail->next = nullptr;
            } else {
                head = nullptr;
            }
        }
    }

    void insert(int index, const T& data) {
        if (index == 0) {
            push_front(data);
        } else {
            Node* temp = head;
            for (int i = 0; i < index - 1 && temp; i++) {
                temp = temp->next;
            }
            if (temp) {
                Node* newNode = new Node(data, temp->next, temp);
                if (temp->next) {
                    temp->next->prev = newNode;
                }
                temp->next = newNode;
                if (temp == tail) {
                    tail = newNode;
                }
            }
        }
    }

    void clear() {
        while (head) {
            pop_front();
        }
    }

    void print() const {
        Node* temp = head;
        while (temp) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }

private:
    Node* head;
    Node* tail;
};

#endif // DLLIST_H