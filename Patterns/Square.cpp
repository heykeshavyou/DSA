#include <iostream>
using namespace std;
int main()
{
    // Pattern
    //  1  2  3  4
    //  1  2  3  4
    //  1  2  3  4
    //  1  2  3  4

    int n = 4;
    char a = 'A';
    // Number Style
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << "  ";
        }
        cout << endl;
    }
    // Alphabet Style
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << (char)(a + j) << "  ";
        }
        cout << endl;
    }
    return 0;
}
