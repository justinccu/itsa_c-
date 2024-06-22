/*
問題描述：

請做一個程式，判斷輸入的字串是否有迴文，若有迴文，則顯示 YES ；

若無迴文，則顯示 NO 。

輸入說明：

請輸入連續字元例如： 12345, abcba, god, heyman, wow

判斷是否迴文。

輸出說明：

若程式判定為迴文時則會顯示 YES, 若不為迴文則回傳為 NO 。
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int cal = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (s[cal] != s[i])
        {
            cout << "NO" << endl;
            return 0;
        }
        cal--;
    }
    cout << "YES" << endl;
    return 0;
}
