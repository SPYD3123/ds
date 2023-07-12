#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[3] = {1, 2, 3};
    int a1 = 3;
    int count = 3;
    for (int i = 0; i < a1; i++)
    {
        for (int j = 0; j < a1; j++)
        {
            for (int k = 0; k < a1; k++)
            {
                cout << a[i] << a[j] << a[k] << " , ";
            }
            cout << endl;
        }
    }
    for (int i = 0; i < a1; i++)
    {
        for (int j = 0; j < a1; j++)
        {
            for (int k = 0; k < a1; k++)
            {
                if (i!=j && j!=k && i!=k)
                {
                   cout << a[i] << a[j] << a[k] <<endl;
                }
                
            }
        }
    }

    return 0;
}
