/*
問題描述：
試寫一個程式，將陣列的內容反轉，舉例來說，如果陣列的內容是：30,20,10,5,34，你的程式必須將陣列內容改為：34,5,10,20,30

輸入說明：
隨意輸入六個數字。

輸出說明：
印出反轉後的內容。
*/
#include <iostream>
using namespace std;

int main()
{
    int a[6];

    // 讀input
    for (int i = 5; i >= 0; i--)
    {
        cin >> a[i];
    }

    // reverse
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << a[5] << endl;

    return 0;
}
