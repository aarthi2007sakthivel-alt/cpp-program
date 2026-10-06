#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string item;
    Node *next;
};

Node *head = NULL;

void addItem(string name)
{
    Node *newNode = new Node;
    newNode->item = name;
    newNode->next = head;
    head = newNode;
}

void removeItem(string name)
{
    Node *temp = head;
    Node *prev = NULL;

    while (temp != NULL && temp->item != name)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Item not found\n";
        return;
    }

    if (prev == NULL)
        head = temp->next;
    else
        prev->next = temp->next;

    delete temp;
    cout << "Item removed\n";
}

void searchItem(string name)
{
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->item == name)
        {
            cout << "Item found\n";
            return;
        }
        temp = temp->next;
    }

    cout << "Item not found\n";
}

void display()
{
    Node *temp = head;

    cout << "Shopping List:\n";
    while (temp != NULL)
    {
        cout << temp->item << endl;
        temp = temp->next;
    }
}

int main()
{
    addItem("Milk");
    addItem("Bread");
    addItem("Apple");

    display();

    searchItem("Bread");

    removeItem("Milk");

    display();

    return 0;
}
