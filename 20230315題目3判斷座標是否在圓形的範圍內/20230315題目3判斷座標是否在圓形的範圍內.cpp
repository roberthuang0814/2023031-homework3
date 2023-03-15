#include<iostream>  
using namespace std;

int main()
{

    int m, n;
    while (cin >> m >> n) {
        int Preset_radius = 10000;
        double new_radius = (m * m) + (n * n); //設double型態確保   
        if (new_radius < Preset_radius) {
            cout << "inside\n";
        }
        else {
            cout << "outside\n";
        }

    }

    return 0;
}