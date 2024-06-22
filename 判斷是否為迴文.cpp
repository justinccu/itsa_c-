/*

問題描述：
迴文是指從前面讀和從後面讀都相同的一個數字或一段文字。例如下列每一五位數的整數都是迴文： 123321 ， 55555 ， 45554 ， 11611 。請撰寫一個程式，判斷它是否迴文。

輸入說明：
輸入一個正整數。

輸出說明：
迴文印出 ” 是 ” ；非回文印出 ” 否 ” 。

*/

#include <iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int a[10];
    int cal = 0;
    while (n / 10)
    {
        a[cal] = n % 10;
        n /= 10;
        cal++;
    }
    a[cal] = n;
    int tmp = cal;
    for (int i = 0; i <= cal; i++)
    {
        if (a[i] != a[tmp])
        {
            cout << "NO\n";
            return 0;
        }
        tmp--;
    }
    cout << "YES\n";
    return 0;
}