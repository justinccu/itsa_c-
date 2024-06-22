/*

問題描述：
請寫一程式，根據指示輸入一個整數M，計算其平方值與立方值。
輸入說明：
第一列有一個正整數n（1≤n≤20）代表共有n組數據。
接下來有n列的整數M（int）。
輸出說明： 輸出每組數據M值以及計算後的平方值與立方值，中間用空白隔開，每行最後都有換行
符號。

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int M;
        cin >> M;
        cout << M << " " << M * M << " " << M * M * M << endl;
    }

    return 0;
}
