/*

問題描述：
已知男生標準體重＝(身高－80 )*0.7；女生標準體重＝(身高－70)*0.6；試寫一個程式可以計算男生女生的標準體重。

輸入說明：
每個測資檔案會有多組測資案例。輸入兩個數值，依序代表為身高及性別（1代表男性；2代表女性）。

輸出說明：
輸出標準體重，浮點數取至第一位。

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x, y;
    while (cin >> x >> y) {
        float m;
        if (y == 1) { // boy
            m = (x - 80) * 0.7;
            cout << fixed << setprecision(1) << m << endl;
        } else { // girl
            m = (x - 70) * 0.6;
            cout << fixed << setprecision(1) << m << endl;
        }
    }
    return 0;
}
