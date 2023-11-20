#include <iostream>
using namespace std;

void identifyOperator(string val)
{
    string operators = "<>=!";

    for (int i = 0; i < val.length(); i++)
    {
        for (int j = 0; j < operators.length(); j++)
        {
            if (val[i] == operators[j])
            {
                if (val[i] == '=')
                {
                    if (i + 1 < val.length() && val[i + 1] == '=')
                    {
                        cout << "\nOperator: == (Equal to)";
                        i++;
                    }

                }
                else if (val[i] == '<')
                {
                    if (i + 1 < val.length() && val[i + 1] == '=')
                    {
                        cout << "\nOperator: <= (Less than or equal to)";
                        i++;
                    }
                    else
                    {
                        cout << "\nOperator: < (Less than)";
                    }
                }
                else if (val[i] == '>')
                {
                    if (i + 1 < val.length() && val[i + 1] == '=')
                    {
                        cout << "\nOperator: >= (Greater than or equal to)";
                        i++;
                    }
                    else
                    {
                        cout << "\nOperator: > (Greater than)";
                    }
                }
                else if (val[i] == '!')
                {
                    if (i + 1 < val.length() && val[i + 1] == '=')
                    {
                        cout << "\nOperator: != (Not equal to)";
                        i++;
                    }

                }
                else
                {
                    cout << "\nOperator: " << val[i];
                }
            }
        }
    }
}

int main()
{
    cout << "Enter Expression: ";
    string expression;
    getline(cin, expression);

    identifyOperator(expression);

    return 0;
}
