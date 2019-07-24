#include"Node.cpp"

template<class T>
class List{
private:
    int count;
    Node<T>* head;
    Node<T>* tail;
public:
    List();
    ~List();
    bool isEmpty();
    void display();
    int getSize();
    bool addAtBeginning(T data);
    bool addAtEnd(T data);
    T deleteFromBeginning();
    T deleteFromEnd();
};
