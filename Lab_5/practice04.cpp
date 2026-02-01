#include <iostream>
#include <vector>
using namespace std;

void evenNumber(vector<int> &arr)
{
    int count = 0;

    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] % 2 == 0)
        {
            count++;
        }
    }

    cout << "Number of even items: " << count << endl;
}

int main()
{
    vector<int> v1;
    int n, element;

    cout << "Enter the size of vector: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> element;
        v1.push_back(element);
    }

    cout << "Elements in vector: ";
    for(int i = 0; i < n; i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    evenNumber(v1);
    return 0;
}
