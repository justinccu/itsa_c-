/*

問題描述：
試撰寫一程式，可輸入月份，然後判斷其所屬的季節（ 3~5 月為春季，6~8 月為夏季， 9~11 月為秋季， 12~2 月為冬季）。

輸入說明：
輸入月份。

輸出說明：
輸出該月份的季節， 3~5 月為春季(Spring)， 6~8 月為夏季(Summer)， 9~11 月為秋季(Autumn)， 12~2 月為冬季(Winter)。

*/

#include <iostream>
using namespace std;

int main()
{
    int m;
    cin >> m;
    if (m >= 3 && m <= 5)
        cout << "Spring\n";
    else if (m >= 6 && m <= 8)
        cout << "Summer\n";
    else if (m >= 9 && m <= 11)
        cout << "Autumn\n";
    else if (m == 12 || m <= 2)
        cout << "Winter\n";
    return 0;
}
