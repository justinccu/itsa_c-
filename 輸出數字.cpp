/*

問題描述：
輸入說明：
輸出說明：
範例
請寫一程式，輸入一個四位數，並將其分解輸出為四個數字。
輸入4位數的整數（int）數字。
輸出分解完的四個數字，每個數字皆有換行。

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < 4; i++)
        cout << s[i] << endl;
    return 0;
}
