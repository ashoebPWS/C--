#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
//default constructor

Node(){
    data=0;
    next=nullptr;
}
//parametrized constructor
Node(int data){
    this->data=data;
    this->next=nullptr;
}
};

class LinkedList
{
    Node* head;
public:
    LinkedList(){ head=nullptr;}
    void insertNode(int);
    void printList();
    void deleteNode(int);
};

void LinkedList::insertNode(int data){
    Node* newNode= new Node(data);

    if(head==nullptr){
        head=newNode;
        return;
    }
    Node* temp=head;
    while(temp->next !=nullptr){
        temp=temp->next;
    }
        temp->next=newNode;
}

void LinkedList::deleteNode(int nodeOffset){
    Node* temp1=head, *temp2=nullptr;
    int listlen=0;
    if(head==nullptr){
        cout<<"List is empty"<<endl;
        return;
    }
        while (temp1 !=nullptr)
        {
            temp1=temp1->next;
            listlen++;
        }
        if(nodeOffset>listlen){
            cout<<"Index out of range"<<endl;
            return;
        }
        temp1=head;
        if (nodeOffset==1)
        {
            head=head->next;
            delete temp1;
            return;
        }
        while (nodeOffset-- >1)
        {
            temp2=temp1;
            temp1=temp1->next;
        }
        temp2->next=temp1->next;
        delete temp1;

}

void LinkedList::printList(){
    Node* temp=head;
    if(head==nullptr){
        cout<<"List is empty"<<endl;
        return;
    }
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}

int main(){
    LinkedList list;

    list.insertNode(1);
    list.insertNode(2);
    list.insertNode(3);
    list.insertNode(4);

    cout<<"Elements on the list are: ";

    list.printList();
    cout<<endl;

    list.deleteNode(2);

    cout<<"Elements on the list are: ";

    list.printList();
    cout<<endl;


    
    return 0;
}




