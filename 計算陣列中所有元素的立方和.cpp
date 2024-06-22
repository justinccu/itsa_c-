/*

問題描述：
試撰寫一個程式，宣告一個 1 維的整數陣列，並計算元素中所有元素的立方和。

輸入說明：
任意輸入六個整數。

輸出說明：
輸出所有元素的立方和。

*/

#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int a[6];
    int sum_of_cubes = 0;

    // 讀取六個整數
    for (int i = 0; i < 6; ++i) {
        cin >> a[i];
        sum_of_cubes += pow(a[i], 3);
    }

    // 輸出所有元素的立方和
    cout << sum_of_cubes << endl;

    return 0;
}
