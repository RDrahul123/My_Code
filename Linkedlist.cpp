#include<iostream>
using namespace std;

class node     // Defining a node
{
    public:
        int data;       // inititialize data variables
        node* next;

        node(int data)     // constructor defination
        {
            this->data= data;
            this->next= nullptr;   // assigning value as NULL(nullptr)
        }
};

class linkedlist        // class for linked list operations
{
    public:
        
        node* head;

        linkedlist()    // constructor for linked list
        {
            head= nullptr;
        }

        void insertbeginning(int data)  // insertion at beginning
        {
            node* newnode= new node(data);
            newnode->next= head;    // assigning the value of head to next 
            head= newnode;  // assinging the head to newnode
        }

        void insertspecific(node* prevnode, int data)
        {
            if(prevnode==nullptr)
            {
                cout<<"Prevnode cannot be empty";
                return;
            }

            node* newnode= new node(data);
            newnode->next= prevnode->next;
            prevnode->next= newnode;
        }

        void insertend(int data)    // insert at end 
        {
            node* newnode= new node(data);
            if(head==nullptr)   // check that head is null or not
            {
                head=newnode;
            }

            else
            {
                node* current= head;    // assign current as head
                while(current->next!=nullptr)
                {
                    current=current->next;
                }
                current->next= newnode;     // current node next point to newnode
            }
        }

        void traverse()     //traveral of linked list
        {
            node* current= head;
            while(current!=nullptr)
            {
                cout<<current->data<<" ";
                current= current->next;
            }

            cout<< endl;
        }

        void deletebeginning()      // Deletion in linked list
        {
            if(head==nullptr)   // checking the head
                return;
            
            node* temp= head;   // assign the temporary temp value
            head= head->next;   // assign the head as head->next
            delete temp;        // Delete temporary temp
        }
};

int main()      // main function
{   
    linkedlist l1;      //object og linked list class

    l1.insertend(2);
    l1.insertend(5);
    l1.insertend(1);
    l1.insertbeginning(7);
    l1.insertbeginning(8);
    l1.insertspecific(l1.head->next, 10);   // l1.head->next is index where to insert the value
    l1.deletebeginning();   // Deleting the beginning or head value

    l1.traverse();

    return 0;
}