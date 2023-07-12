#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cout << "Enter the number of vertices" << endl;
    cin >> a;
    cout << "The vertices are:- ";
    for (int i = 0; i < a; i++)
    {
        cout << "v" << i << endl;
    }
    int **mat = new int *[a];
    for (int i = 0; i < a; i++)
    {
        mat[i] = new int[a];
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            mat[i][j] = 0;
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            int ch;
            cout << "is v" << i << " and v" << j << " are connected? 1 for yes 0 for no " << endl;
            cin >> ch;
            if (ch == 1)
            {
                mat[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    int *ind = new int(a);
    int *outd = new int(a);
    for (int m = 0; m < a; m++)
    {
        ind[m] = 0;
        outd[m] = 0;
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (mat[i][j] == 1)
            {
                ind[j] = ind[j] + 1;
                outd[i] = outd[i] + 1;
            }
        }
    }
    for (int y = 0; y < a; y++)
    {
        cout << "In degree of v" << y << " is " << ind[y] << endl;
        cout << "Out degree of v" << y << " is " << outd[y] << endl;
    }
    cout << endl;

    return 0;
}
