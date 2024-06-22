/*

問題描述 ：

輸入一整數N及N個整數，請依照十進位中各位數字和由小到大排序輸出。如果各位數字和相等則比較數值由小到大排列。例如： 9122的各位數字和為 9+1+2+2=14、3128 的各位數字和為 3+1+2+8=14而5112的各位數字和為 5+1+1+2=9。所以輸入 9122 3128 5112 需輸出 5112 3128 9122 ，這是因為 5112(9) < 3128(14) < 9122(14)，其中又因為 3128 與 9122 兩者的各位數字和都是 14，所以將 數值小的 3128 放前面。

輸入說明 ：

第一行輸入 N ，第二行輸入 N 個整數，用空白隔開，N<10。

輸出說明 ：

輸出排序結果。

*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        b[i] = 0;
        cin >> a[i];
        int tmp = a[i];
        while (tmp > 0)
        {
            b[i] += tmp % 10;
            tmp /= 10;
        }
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (b[j] > b[i] || (b[j] == b[i] && a[j] > a[i]))
            {
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
        }
    }

    for (int i = 0; i < n - 1; i++)
        cout << a[i] << " ";
    cout << a[n - 1] << endl;

    return 0;
}
