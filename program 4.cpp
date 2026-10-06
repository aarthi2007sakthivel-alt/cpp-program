#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> history;

    history.push("Google.com");
    history.push("Youtube.com");
    history.push("Abcse.com");
    history.push("Facebook.com");

    cout << "Browser History:\n";

    stack<string> temp = history;

    while (!temp.empty())
    {
        cout << temp.top() << endl;
        temp.pop();
    }

    cout << "\nPress Back once: ";
    history.pop();
    cout << history.top() << endl;

    cout << "Press Back twice: ";
    history.pop();
    cout << history.top() << endl;

    return 0;
}
