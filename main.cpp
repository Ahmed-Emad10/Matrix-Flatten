#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
#define FIO ios_base::sync_with_stdio(false); \
        cin.tie(0);                        \
        cin.tie(0);

void matrixflatten(vector<vector<vector<double>>> matrix3d)
{
    int n = matrix3d.size();
    int m = matrix3d[0].size();
    int p = matrix3d[0][0].size();
    int q = n * m * p;
    int y = 0;
    vector<double> flattened(q);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < p; k++)
            {
                y = i * m * p + j * p + k;
                flattened[y] =  matrix3d[i][j][k];
            }
        }
    }
    for (y = 0; y < q; y++)
    {
        cout<<flattened[y]<<" ";
    }
}

int main()
{

    FIO;
    int n,m,p;
    cout << "Please, Enter the dimensions of the 3D matrix :"<<endl;
    cin>> n >> m >> p;    
    while (n <= 0 || m <= 0 || p <= 0) {
        cout << "The dimensions is not correct"<<endl;
        cout << "Please, Enter the dimensions of the 3D matrix again:"<<endl;
        cin >> n >> m >> p;
    }
    vector<vector<vector<double>>> matrix3d;
    matrix3d.resize(n, vector<vector<double>>(m, vector<double>(p)));
    cout<<"Please, Enter the values of the matrix :"<<endl;
    double value;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < p; k++)
            {
                cin>>value;
                matrix3d[i][j][k]=value; 
            }
        }
    }

    matrixflatten(matrix3d);

    return 0;
}