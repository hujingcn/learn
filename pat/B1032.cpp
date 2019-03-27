#include <iostream>
using namespace std;

int main()
{
    const int maxn = 100001; //不能用100000
    int school[maxn] = {0};
    int n, schoolID, score;
    cin >> n;
    for(int i = 0;i < n;i++){
       cin >> schoolID >> score;
       school[schoolID] += score;
    }
    int k =1, MAX = -1;
    for(int i = 1; i <= n; i++){  // 从1开始遍历，之前ID在数组中变大了1
        if (school[i] > MAX) {
            MAX = school[i];
            k = i;
        }
    }
    cout << k << " " << MAX << endl; //注意中间加空格
    
    system("pause");
    return 0;
}

