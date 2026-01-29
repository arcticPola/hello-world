#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 33, 22, 44, 223, 5645, 4545, 335, 446};
    for(auto&& x : vec)
    {
        cout << x << endl;
    }
    return 0;
}