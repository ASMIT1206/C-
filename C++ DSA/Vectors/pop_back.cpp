#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(10);
    v.push_back(56);
    v.push_back(86);
    v.push_back(44);

    cout << "Initial Size: " << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    v.pop_back(); // last element udd gaya lekin capacity nahi badlegi
    cout << "size after first pop-back: " << v.size();
    cout << endl;

    for (int i = 0; i < v.size(); i++)
     cout << v[i] << " ";

    cout << endl;
    cout <<"Capacity: "<<v.capacity();
    cout << endl;


     v.pop_back(); // last element udd gaya lekin capacity nahi badlegi
    cout << "size after 2nd pop-back: " << v.size();
    cout << endl;

    for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

        cout << endl;
    cout <<"Capacity after 2nd pop-back: "<<v.capacity();
}