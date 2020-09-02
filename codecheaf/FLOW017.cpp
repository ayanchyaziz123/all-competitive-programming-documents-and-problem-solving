#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    int A, B, C;
    while (T > 0)
    {
        cin >> A >> B >> C;

        if (A >= B && A >= C)
        {
            if (B >= C)
            {
                cout << B << endl;
            }
            else
                cout << C << endl;
        }
        else if (B >= A && B >= C)
        {
            if (A >= C)
            {
                cout << A << endl;
            }
            else
                cout << C << endl;
        }
        else if (A >= B)
        {
            cout << A << endl;
        }
        else
            cout << B << endl;

        T--;
    }
}