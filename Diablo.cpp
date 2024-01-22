#include <iostream>
#include <vector>

using namespace std;

int diablo(int m, int d, int c, int k)
{
    int result = 0; // so vang can
    int sword = d;  // do ben mac dinh cua kiem

    while (m >= 0)
    {
        while (d >= 1)
        {
            m -= 1;
            d -= k;
        }

        if (m == d)
        {
            return result;
        }

        d = sword;
        result += c;
    }

    return result;
}

int main()
{
    int m, d, c, k;
    cin >> m >> d >> c >> k;
    cout << diablo(m, d, c, k);

    system("pause");

    return 0;
}