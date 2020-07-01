#include <iostream>
using namespace std;
int median(int a[], int n)
{
    if (n % 2 == 0)
    {
        return (a[n / 2] + a[n / 2 - 1]) / 2;
    }
    else
    {
        return a[n / 2];
    }
}
int getmedian(int a[], int b[], int n)
{
    if (n <= 0)
    {
        return -1;
    }
    if (n == 1)
    {
        return (a[0] + b[0]) / 2;
    }
    if (n == 2)
    {
        return (max(a[0], b[0]) + min(a[1], b[1])) / 2;
    }
    int m1, m2;
    m1 = median(a, n);
    m2 = median(b, n);
    if (m1 == m2)
    {
        return m1;
    }
    if (m1<m2)
    {
        if (n%2==0)
        {
            return getmedian(a+n/2-1,b,n-(n/2)+1);
        }
        else
        {
            return getmedian(a+n/2,b,n-n/2);
        }
        
        
    }
   
        if (n%2==0)
        {
            return getmedian(b+n/2-1,a,n-(n/2)+1);
        }
        else
        {
            return getmedian(b+n/2,a,n-n/2);
        }
    
    
    
}
int main()
{
    int n;
    cin>>n;
    int a[1000];
    int b[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int ans = getmedian(a, b, n);
    cout << ans;
    return 0;
}