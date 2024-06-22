/*

問題描述： 有天老師心血來潮叫班上的同學用電腦畫圖，小明根到可用“*"（星號）畫出一個mxn
的實心矩形。請寫一程式，用星號（*）畫出老師想要的圖。
輸入說明：
數中間用空白隔開。
輸入2個正整數（int），表示要印出矩形圖案的長（m）、寬（n），（1≤m,n≤10）。2個正整
輸出說明：
輸出實心矩形的圖案。

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
