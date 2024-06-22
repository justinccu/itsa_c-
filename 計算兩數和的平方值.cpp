/*

問題描述：
請設計一個程式，讀入兩個數字，可計算兩數和的平方值。
輸入說明：
空白隔開。
第一列有一個正整數n（1≤n≤20）代表共有n組測試案例。
接下來有n列測資，每組測試案例輸入兩個正整數（int）（-100≤X,Y≤100），中間用
輸出說明：
輸出每組兩整數和的平方值（int），每一列為一組輸出結果，每行最後都有換行符號。

*/

#include <iostream>
using namespace std;

int main()
{
    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << (a + b) * (a + b) << endl;
    }

    return 0;
}
