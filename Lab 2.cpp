#include <iostream>
using namespace std;

void op(string v)
{
    string a = "+-*/%=";

    for (int i = 0; i < a.length(); i++)
    {
        for (int j = 0; j < v.length(); j++)
        {
            if (a[i] == v[j])
            {
                cout << "\nOpr: " << a[i];
            }
        }
    }
}

int main()
{
    cout << "Enter Expression: ";
    string v;
    cin >> v;

    op(v);
}

