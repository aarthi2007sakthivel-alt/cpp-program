#include <iostream>
using namespace std;

struct Coach
{
    int number;
    Coach *next;
};

Coach *head = NULL;

void addBeginning(int num)
{
    Coach *newCoach = new Coach;
    newCoach->number = num;
    newCoach->next = head;
    head = newCoach;
}

void addEnd(int num)
{
    Coach *newCoach = new Coach;
    newCoach->number = num;
    newCoach->next = NULL;

    if (head == NULL)
    {
        head = newCoach;
        return;
    }

    Coach *temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newCoach;
}

void removeCoach(int num)
{
    Coach *temp = head;
    Coach *prev = NULL;

    while (temp != NULL && temp->number != num)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Coach not found\n";
        return;
    }

    if (prev == NULL)
        head = temp->next;
    else
        prev->next = temp->next;

    delete temp;
    cout << "Coach removed\n";
}

void display()
{
    Coach *temp = head;

    cout << "Train Coaches: ";

    while (temp != NULL)
    {
        cout << temp->number << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    addBeginning(2);
    addBeginning(1);
    addEnd(3);
    addEnd(4);

    display();

    removeCoach(2);

    display();

    return 0;
}
