/*

問題描述：
撰寫一個程式，使用者輸入一個整數，印出8位元的二進制表示。

輸入說明：
輸入一個整數，介於-128～127之間。

輸出說明：
以8位元的二進制顯示。

*/

#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int number;
    cin >> number;

    bitset<8> binary(number & 0xFF); // & 0xFF 保證只取低8位
    cout << binary << endl;

    return 0;
}
