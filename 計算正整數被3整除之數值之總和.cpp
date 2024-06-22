/*

問題描述：
試寫一個程式，輸入一正整數N，可計算出1到N之間可被3整除的數值之總和。

輸入說明：
輸入一正整數。

輸出說明：
輸出總和。

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0) //被3整除
            t += i;
    }
    cout << t << endl;
    return 0;
}