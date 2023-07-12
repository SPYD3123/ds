#include <iostream>
using namespace std;
int main()
{
    float n;
    cout<<"Enter the value of n for equation"<<endl;
    cout<<"4n^2+2n+9 :- ";
    cin>>n;
    float eq=4*n*n + 2*n + 9;
    cout<<"The value of equation 4n^2+2n+9 at "<<n<<" is "<<eq;
    return 0;
}
