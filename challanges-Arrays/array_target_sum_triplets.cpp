#include <iostream>
#include <algorithm>
using namespace std;
void sumtriplet(int a[], int n, int target)
{
    int k = 0;
    int t = target;
    while (k < n)
    {
        t = target - a[k];
        int i = k + 1;
        int j = n - 1;
        while (i < j)
        {
            if ((a[i] + a[j]) == t)
            {
                cout << a[k] << ", " << a[i] << " and " << a[j] << endl;
                i++;
                j--;
            }
            else
            {
                if (a[i] + a[j] < t)
                {
                    i++;
                }
                else
                {
                    j--;
                }
            }
        }
        k++;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[1000] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int target;
    cin >> target;
    sort(a, a + n);
    sumtriplet(a, n, target);
    return 0;
}