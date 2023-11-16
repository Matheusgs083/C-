void insert(DoublyLinkedList& list, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = list.head;

    Node* current = list.head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newNode;
    newNode->prev = current;
}

void deleteNode(DoublyLinkedList& list, int data) {
    Node* nodeToDelete = search(list, data);
    if (nodeToDelete) {
        Node* prevNode = nodeToDelete->prev;
        Node* nextNode = nodeToDelete->next;

        prevNode->next = nextNode;
        if (nextNode) {
            nextNode->prev = prevNode;
        }

        delete nodeToDelete;
    }
}

Node* search(DoublyLinkedList& list, int data) {
    Node* current = list.head->next;
    while (current != NULL) {
        if (current->data == data) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}