#include <iostream>

void reading(int& h, int& m);

using namespace std;
int main()
{
    int h, m;
    reading(h, m);
}

void reading(int& h, int& m)
{
    cout << "Input analogue clock hours ";
    cin >> h;
    if (h > 12 && h < 1) cout << "Range of analogue clock is 1-12";
    cout << "Enter minutes ";
    cin >> m;
    if (m > 60 && m < 0) cout << "Range of minutes is 0-60";
}