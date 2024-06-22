/*
題目描述:
一維陣列反轉

輸入說明:
輸入一個一維陣列，元素最多不超過100個

輸出說明:
輸出反轉後的陣列
最後需有換行。
*/

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> a;
    int temp;

    // 讀到EOF
    while (std::cin >> temp)
    {
        a.push_back(temp);
    }

    // 反著輸出
    for (int i = a.size() - 1; i > 0; --i)
    {
        std::cout << a[i] << " ";
    }
    if (!a.empty())
    {
        std::cout << a[0] << std::endl;
    }

    return 0;
}
