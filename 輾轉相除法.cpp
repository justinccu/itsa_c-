/*

問題描述：

給定二個正整數，利用輾轉相除法求其最大公因數。

輸入說明：

給定二個正整數

輸出說明：

輸出最大公因數

範例：

假設輸入為 300 與 250, 則輸出為 50

*/

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << gcd(x, y) << endl;
    return 0;
}
