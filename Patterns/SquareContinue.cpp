#include <iostream>
using namespace std;
int main()
{
    // Pattern
    //  1  2  3
    //  4  5  6
    //  7  8  9

    // Number style
    int n = 4;
    int temp = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << temp << "  ";
            temp++;
        }
        cout << endl;
    }
    // Alphabets style
    int temp1 = 0;
    char a = 'A';
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << (char)(temp1 + a) << "  ";
            temp1++;
        }
        cout << endl;
    }
    return 0;
}
