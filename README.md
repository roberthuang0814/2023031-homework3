#include<iostream>  
using namespace std;

int main() //執行結束時，會傳回一個完整的數據到作業系統
{

    int m, n; //聲明名為m及n的變量
    while (cin >> m >> n) { //讀取m及n並執行以下的循環
        int Preset_radius = 10000; //聲明Preset_radius變量，初始值設為10000
        double new_radius = (m * m) + (n * n); //計算m*m+n*n儲存在new_radius裡  
        if (new_radius < Preset_radius) { //如果新半徑值小於預設半徑值顯示inside
            cout << "inside\n";
        }
        else {
            cout << "outside\n"; //如果新半徑值大於預設半徑值顯示outside
        }

    }

    return 0; //結束程式返回0
}
