void concatenateLists(Node*& list1, Node*& list2) {
    if (list1 == NULL) {
        list1 = list2;
        return;
    }
    if (list2 != NULL) {
        Node* current = list1;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = list2;
        list2->prev = current;
    }
}

bool searchInList(Node* list, int target) {
    Node* current = list;
    while (current != NULL) {
        if (current->data == target) {
            return true;
        }
        current = current->next;
    }
    return false;
}

void splitList(Node*& original, Node*& list1, Node*& list2) {
    list1 = NULL;
    list2 = NULL;
    Node* current = original;
    while (current != NULL) {
        Node* newNode = new Node(current->data);
        if (list1 == NULL) {
            list1 = newNode;
            list1->prev = NULL;
            list1->next = NULL;
        } else {
            Node* lastNode = list1;
            while (lastNode->next != NULL) {
                lastNode = lastNode->next;
            }
            lastNode->next = newNode;
            newNode->prev = lastNode;
        }
        current = current->next;
    }
}