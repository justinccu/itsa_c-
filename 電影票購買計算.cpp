/*
問題描述：

請撰寫一支簡單電影票計價程式。
條件:
全票250元、半票175元。

輸入說明：

第一行整數代表有幾組測試資料，每一組測資有兩個正整數，並以空白間隔，依序代表為購買全票張數及半票張數，正整數皆小於一百。

輸出說明：

輸出每組測資電影票總價錢。

*/

#include <iostream>
using namespace std;

int main()
{
    int n, a, c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> c;
        cout << 250 * a + 175 * c << endl;
    }
    return 0;
}
