#include <unordered_map>

class DoublyLinkedNode {
public:
  int key;
  int value;
  DoublyLinkedNode *next;
  DoublyLinkedNode *prev;

  DoublyLinkedNode(int key, int value) {
    this->key = key;
    this->value = value;
    next = NULL;
    prev = NULL;
  }
};

class LRUCache {
public:
  int capacity;

  LRUCache(int capacity) {
    this->capacity = capacity;
    head->next = tail;
    tail->prev = head;
  }

  int get(int key) {
    if (map.count(key) == 0)
      return -1;
    DoublyLinkedNode *temp = map[key];
    remove_node(temp);
    insert_node(temp);
    return temp->value;
  }

  void put(int key, int value) {
    DoublyLinkedNode *temp = new DoublyLinkedNode(key, value);
    if (map.count(key) != 0)
      remove_node(map[key]);
    if (map.size() == capacity)
      remove_node(tail->prev);
    insert_node(temp);
  }

private:
  std::unordered_map<int, DoublyLinkedNode *> map;

  DoublyLinkedNode *head = new DoublyLinkedNode(0, 0);
  DoublyLinkedNode *tail = new DoublyLinkedNode(0, 0);

  void remove_node(DoublyLinkedNode *node) {
    map.erase(node->key);

    DoublyLinkedNode *prev = node->prev;
    DoublyLinkedNode *next = node->next;

    prev->next = next;
    next->prev = prev;
  }

  void insert_node(DoublyLinkedNode *node) {
    map[node->key] = node;

    DoublyLinkedNode *second = head->next;

    node->next = second;
    node->prev = head;

    second->prev = node;
    head->next = node;
  }
};
