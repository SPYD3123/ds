#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cout<<"Enter the number of vertices"<<endl;
    cin>>a;
    cout<<"The vertices are:- ";
    for (int i = 0; i <a; i++)
    {
        cout<<"v"<<i<<endl;
    }
    int **mat=new int*[a];
    for (int i = 0; i <a; i++)
    {
        mat[i]=new int[a];
    }
    for (int i = 0; i  < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            mat[i][j]=0;
        }
        
    }
    
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <i; j++)
        {
            int ch;
            cout<<"is v"<<i<<" and v"<<j<<" are connected? 1 for yes 0 for no "<<endl;
            cin>>ch;
            if (ch==1)
            {
                mat[i][j]=1;
                mat[j][i]=1;
            }
            
        }
        
    }
    for (int i = 0; i  < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    bool z=true;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (mat[i][j]!=1)
            {
                z=false;
            }
            
        }
        
    }
    if (z==true)
    {
        cout<<"complete graph";
    }
    else{
        cout<<"Not a complete graph";
    }
    
    return 0;
}
