/*

問題描述：
輸入說明：
輸出說明：
請設計一個程式，判斷數字為正數、0或負數。
輸入一個整數數字N（-100≤N≤100）。
輸出數字判斷結果為正數、0或負數。

*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N > 0)
        cout << "正數" << endl;
    else if (N == 0)
        cout << "0" << endl;
    else
        cout << "負數" << endl;
    return 0;
}
