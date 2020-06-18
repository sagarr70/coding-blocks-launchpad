#include <iostream>
using namespace std;
bool check(char a[][100], int n, int m, int k, int s)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {   
        for (int j = 0; j < m; j++)
        {   if (s < k)
            {
                flag = 1;
                return false;
            }
            
            if (a[i][j] == '.')
            {
                s -= 2;
            }
            else
            {
                if (a[i][j] == '*')
                {
                    s += 5;
                }
                else
                {
                    break;
                }
            }

            
            if (j != m - 1)
            {
                s = s - 1;
            }
        }
    }
    
    
        cout << s << endl;
        return true;
    
}
int main()
{
    int n, m;
    cin >> n >> m;
    int k;
    int s;
    cin >> k >> s;
    char park[100][100] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> park[i][j];
        }
    }
    bool ans = check(park, n, m, k, s);
    if (ans)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    
    return 0;
}