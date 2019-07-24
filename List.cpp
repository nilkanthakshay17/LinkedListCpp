#include"List.h"

template<class T>
List<T>::List():count(0),head(NULL),tail(NULL){
}
template<class T>
List<T>::~List(){
    cout<<"Destructor called"<<endl;
    Node<T>* t=NULL;
    while(head!=NULL){
        t=head;
        head=head->getNext();
        delete t;
    }
    cout<<"List Destroyed"<<endl;
}
template<class T>
bool List<T>::isEmpty(){
    return ((head==NULL) && (tail==NULL));
}
template<class T>
void List<T>::display(){
    cout<<"Linked List Contents are: "<<endl;
    Node<T>* t=head;
    while(t!=NULL){
        cout<<t->getData()<<"--->";
        t=t->getNext();
    }
    cout<<"NULL"<<endl;
}
template<class T>
int List<T>::getSize(){
    return count;
}
template<class T>
bool List<T>::addAtBeginning(T data){
    bool res=false;
    if(isEmpty()){
        Node<T>* t=new Node<T>();
        t->setData(data);
        t->setNext(NULL);
        head=t;
        tail=t;
        count++;
        res=true;
    }
    else{
        Node<T>* t=new Node<T>();
        t->setData(data);
        t->setNext(head);
        head=t;
        count++;
        res=true;
    }
    return res;
}
template<class T>
bool List<T>::addAtEnd(T data){
    bool res=false;
    if(isEmpty()){
        Node<T>* t=new Node<T>();
        t->setData(data);
        t->setNext(NULL);
        head=t;
        tail=t;
        count++;
        res=true;
    }
    else{
        Node<T>* t=new Node<T>();
        t->setData(data);
        t->setNext(NULL);
        tail->setNext(t);
        tail=t;
        count++;
        res=true;
    }
    return res;
}
template<class T>
T List<T>::deleteFromBeginning(){
    T data=-1;
    if(!isEmpty()){
        if(head==tail){
            Node<T>* t=NULL;
            t=head;
            data=t->getData();
            delete t;
            head=NULL;
            tail=NULL;
            count--;
        }
        else{
            Node<T>* t=NULL;
            t=head;
            data=t->getData();
            head=head->getNext();
            delete t;
            count--;
        }
    }
    return data;
}
template<class T>
T List<T>::deleteFromEnd(){
    T data=-1;
    if(!isEmpty()){
        if(head==tail){
            Node<T>* t=NULL;
            t=head;
            data=t->getData();
            delete t;
            head=NULL;
            tail=NULL;
            count--;
        }
        else{
            Node<T>* t=NULL;
            t=head;
            while(t->getNext()!=tail){
                t=t->getNext();
            }
            data=tail->getData();
            t->setNext(NULL);
            delete tail;
            tail=t;
            count--;
        }
    }
    return data;
}
