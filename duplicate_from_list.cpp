#include<iostream>
using namespace std;

class Node
{
    public:

    Node* next;
    int data;
    Node(int data)
    {
        this->data= data;
        this->next= nullptr;
    }
};

class linkedlist{

    public:
    Node* head;
    linkedlist()
    {
        head= nullptr;
    }    

    void insert(int data)
    {
        Node* newnode= new Node(data);
        newnode->next= head;
        head= newnode;
    }

    // void deletedata()
    // {
    //     if(head==nullptr)
    //         return;
    //     Node* temp= head;
    //     head= head->next;
    //     delete temp;
    // }

    void traverse()
    {
        Node* current= head;
        cout<<"Linked list: ";
        while(current!=nullptr)
        {
            cout<<current->data<<" ";
            current= current->next;
        }

        cout<<endl;
    }
    
    void removeduplicates()
    {
        if(head==nullptr)
            return;

        Node* current= head;
       
        while(current!=nullptr)
        { 
            Node* runner= current;
            while(runner->next!=nullptr)
            {
                if(runner->next->data==current->data)
                {
                    Node* temp= runner->next;
                    runner->next= runner->next->next;
                    delete temp;
                }
                else 
                    runner= runner->next;
            }

            current= current->nsssext;
        }
    }
};



int main()
{
    linkedlist l1;      

    l1.insert(2);
    l1.insert(5);
    l1.insert(1);
    l1.insert(5);
    l1.insert(2);
    l1.insert(7);
    l1.removeduplicates();
    // l1.deletedata();   

    l1.traverse();

    return 0;
}