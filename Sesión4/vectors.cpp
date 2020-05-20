#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

class Dummy
{
public: 
    string name="juan"; 
};

int main()
{
    int size = 15;
    
    vector<int> v;
    v.reserve(size);

    vector<int> valoresDiferentes = {7, 11, 14};

    for(int i=0; i<size; i++)
    {
        if(find(valoresDiferentes.begin(), valoresDiferentes.end(), i) != valoresDiferentes.end())
        {
            v.push_back(2);
        }
        else
            v.push_back(1);
    }

    for(int i=0; i<size; i++)
    {
        cout << v[i] << " ";
    }
}




