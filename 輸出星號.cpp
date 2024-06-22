/*

問題描述：
輸入說明：
輸出說明：
範例
請寫一程式，根據讀取五位數的數字，列印每個數字的星號（）。
輸入5位數的整數（int）數字，每個數字介於1-9之間，可重覆出現。
分別輸出該五位數字的各字的個數星號（*），每個數值皆換行。

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string number;
    cin >> number;

    for (int i = 0; i < number.length(); ++i)
    {
        int count = number[i] - '0';
        for (int j = 0; j < count; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
