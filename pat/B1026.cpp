#include <iostream> 
#include <iomanip>  // 为setw()和setfill()的头文件
using namespace 
std; int main() { 
	int c1, c2;
    cin >> c1 >> c2;
    int runtime = c2 - c1;
    if (runtime % 100 >= 50) {
        runtime = runtime / 100 +1;
    }  else {
        runtime = runtime / 100;
    }
    cout << setw(2) << setfill('0') << runtime / 3600 << ":" << 
    setw(2) << setfill('0') <<  runtime % 3600 / 60 
    << ":" << setw(2) << setfill('0') << runtime % 60 <<endl;
    system("pause");
	//setw()指定输出位数，setfill('0')不足位数补0
    return 0;
}

