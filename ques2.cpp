#include <iostream>
using namespace std;
class relation
{
private:
    int *arr = NULL;
    int **rel = NULL;
    int n;

public:
    relation()
    {
        cout << "enter the number of element you want in set ";
        cin >> n;
        arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cout << "Enter element number " << i + 1 << " ";
            cin >> arr[i];
        }
        rel = new int *[n];
        for (int i = 0; i < n; i++)
        {
            rel[i] = new int[n];
        }
        for (int m = 0; m < n; m++)
        {
            for (int k = 0; k < n; k++)
            {
                rel[m][k] = 0;
            }
        }

        cout << "The set entered by you is :- " << endl
             << "[";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "]" << endl;
        cout << "Creating a relation" << endl;
        int b;
        cout << "Enter 1 for yes and 0 for no" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "is element " << arr[i] << " and " << arr[j] << " are related? ";
                cin >> b;
                if (b == 1)
                {
                    rel[i][j] = 1;
                }
            }
        }
        cout << "Your relation in matrix form:- " << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << rel[i][j] << " ";
            }
            cout << endl;
        }
    }
    void checktransitive()
    {
        int test[n][n] = {};
        bool b = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                test[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    test[i][j] = test[i][j] | (rel[i][k] * rel[k][j]);
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (test[i][j] != rel[i][j])
                {
                    b = false;
                    break;
                }
            }
        }
        if (b)
        {
            cout << "Relation is transitive";
        }
        else
        {
            cout << "Not transitive";
        }
        cout << endl;
    }
    void reflexive()
    {
        bool b = true;
        for (int i = 0; i < n; i++)
        {
            if (rel[i][i] != 1)
            {
                b = false;
                break;
            }
        }
        if (b)
        {
            cout << "It is reflexive";
        }
        else
        {
            cout << "It is not symmetric";
        }
        cout << endl;
    }
    void symmetric()
    {

        bool b = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                if (rel[i][j] != rel[j][i])
                {
                    b = false;
                    break;
                }
            }
        }
        if (b)
        {
            cout << "It is symmetric relation";
        }
        else
        {
            cout << "Not symmetric relation";
        }
        cout << endl;
    }
};
int main()
{
    relation r1;
    r1.checktransitive();
    r1.reflexive();
    r1.symmetric();
    return 0;
}