#include<bits/stdc++.h>
using namespace std;

void fun(int* p){
    // *p = 100;0
    int y = 100;
    p = &y;
    cout << "In fun function: " << &p << endl;
}
int main()
{
    int x = 10;
    int* p = &x;

    fun(p);
    cout << "In main function: " << x << endl;

    return 0;
}