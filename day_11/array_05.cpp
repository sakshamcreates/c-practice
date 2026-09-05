#include <iostream>
using namespace std;

int main()
{
    int chaiSales[3][7] = {
        {50, 60, 67, 34, 54, 76, 34},
        {67, 43, 87, 54, 23, 11, 87},
        {54, 86, 54, 34, 76, 98, 45}
    };

    for (int i = 0; i < 3; i++)
    {
        cout << "I am at shop: " << i + 1 << endl;

        for (int j = 0; j < 7; j++)
        {
            cout << chaiSales[i][j] << " cups ";
        }

        cout << endl;
    }

    return 0;
}