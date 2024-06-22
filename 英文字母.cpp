/*

問題描述：
請設計一個程式，判斷輸入的英文字母為母音、子音。
字母a,e.i,o,u稱為母音，其餘為子音。
輸入說明：
輸入一個字元（char），a~z不分大小寫。
輸出說明：
輸出英文字母的判斷結果為母音、子音。

*/

#include <iostream>
#include <cctype> // for tolower function
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        cout << "母音" << endl;
    else
        cout << "子音" << endl;

    return 0;
}
