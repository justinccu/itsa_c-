/*

問題描述 ：

製作出一個 4 位數的猜數字系統，若此數的數值和位置跟答案完全相同則出現 A ，若此數的數值跟答案相同但位置不一樣則出現 B ， 4A 時代表猜中此數字。 ( 注意 : 此猜數字的字數不能重複 )

假設答案為 :1234

若輸入 :

5621

4321

1324

1234

0000

則會輸出 :

0A2B

0A4B

2A2B

4A0B

輸入說明 ：

讀入一連串的 4 位數字，最前面那個為此提猜數字的答案，接著為猜此數字的答案，輸入 0 為結束。

輸出說明 ：

將幾 A 幾 B 輸出

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string c, b;
    cin >> c;

    while (true)
    {
        cin >> b;
        int a = 0, na = 0; // a = 位置數字正確, na = 僅數字正確

        // 結束遊戲的條件
        if (b == "0000")
            return 0;

        // 位置與數字判別
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (c[j] == b[i] && i == j)
                    a++;
                else if (c[j] == b[i])
                    na++;
            }
        }

        cout << a << "A" << na << "B" << endl;
    }

    return 0;
}
