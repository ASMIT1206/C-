#include <iostream>
using namespace std;
int steps(int n){
if(n==1||n==2)return n;
return steps(n-1)+ steps(n-2);

}
int main()
{
    // either one step or two steps at a time
    int n;
    cout << "Enter n: ";
    cin >>n;
    cout<<"No. of steps required is: "<<steps(n);
}