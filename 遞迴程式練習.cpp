/*

輸入說明：

輸入值為一個大於 1 的整數。

輸出說明：

f(k) 的計算結果。

*/

#include <iostream>
using namespace std;

int f(int x)
{
    if (x == 0 || x == 1)
        return x + 1;
    else
        return f(x - 1) + f(x / 2);
}

int main()
{
    int x;
    cin >> x;
    cout << f(x) << endl;
    return 0;
}
