#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[100][100];
    int presum[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (j == 0)
            {
                presum[i][j] = a[i][j];
            }
            else
            {
                presum[i][j] = presum[i][j - 1] + a[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j != 0)
            {

                presum[j][i] += presum[j - 1][i];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << presum[i][j] << " ";
        }
        cout << endl;
    }
    int li, lj, bi, bj;
    cin >> li >> lj >> bi >> bj;
    int sum = 0;
    sum = presum[bi][bj];
    if (li - 1 >= 0)
    {
        sum = sum - presum[li - 1][bj];
    }
    if (lj - 1 >= 0)
    {
        sum = sum - presum[bi][lj - 1];
    }
    if (li - 1 >= 0 && lj - 1 >= 0)
    {
        sum = sum + presum[li - 1][lj - 1];
    }
    cout << sum;
    return 0;
}