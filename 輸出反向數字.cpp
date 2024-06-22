/*

問題描述：
請寫一程式，輸入一個四位數，並將其分解，反向輸出為四個數字。
例如：輸入1234，則輸出4,3,2,1
輸入說明：
輸出說明：
輸入4位數的整數（int）數字。
將分解完的四個數字，反向輸出，數字間用逗點隔開，最後有換行。

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 3; i > 0; i--)
    {
        cout << s[i] << ",";
    }
    cout << s[0] << endl;
}
