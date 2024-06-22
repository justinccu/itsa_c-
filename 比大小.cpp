/*

問題描述：
輸入說明：
輸出說明：
請設計一個程式，讀入三個數字，找出最大的整數。
輸入三個正整數（int），不大於10000，中間用空白隔開。
輸出三個整數中最大的整數。

*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int max_value = a; // 假設a是最大的

    if (b > max_value) {
        max_value = b; // 如果b比max_value大，則b是最大的
    }

    if (c > max_value) {
        max_value = c; // 如果c比max_value大，則c是最大的
    }

    cout << max_value << endl; // 輸出最大的數

    return 0;
}

