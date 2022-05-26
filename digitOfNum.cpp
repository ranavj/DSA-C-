#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int count = 0, n;
    cin >> n;
    while (n != 0)
    {
        n = n/10;
        ++count;
    }
    cout << count;
    return 0;
}
