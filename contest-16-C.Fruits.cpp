#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int n, m, fruits[101], i, j, k, x, sum;
    int  maximum = 0, minimum = 0, cnt[101];
    string frtnam[101];

    cin >> n >> m;

    for(i = 0; i < n; i++){
        cin >> fruits[i];
    }
    fruits[i] = '\0';
    for(i = 0; i < m; i++){
        cin >> frtnam[i];
    }

    int m1 = m, m2 = m;
    for(i = 0; i < m; i++) cnt[i] = 1;
    for(i = 0; i < m; i++)
    {
        if(cnt[i] == 1)
        {
            for(j = i+1; j < m; j++)
            {
                if(frtnam[i] == frtnam[j])
                {
                    cnt[i]++;
                    cnt[j] = 0;
                }
            }
        }
    }
    cnt[i] = '\0';

    sort(cnt, cnt+m);
    sort(fruits, fruits+n);

    for(i = 0, j = m-1; m1 > 0; i++, j--)
    {
        sum = 0;
        x = 0;
        for(k = 0; k < cnt[j]; k++)
        {
            x++;
            sum += fruits[i];
        }
        //cout << sum << endl;
        minimum += sum;
        m1 -= x;
    }

    for(i = n-1, j = m-1; m2 > 0; i--, j--)
    {
        sum = 0;
        x = 0;
        for(k = 0; k < cnt[j]; k++)
        {
            x++;
            sum += fruits[i];
        }
        maximum += sum;
        m2 -= x;
    }

    cout << minimum << ' ' << maximum << endl;

    return 0;
}

/*Another optimum solution
#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int n, m, a, b, x, i, min, max;

    while(scanf("%d %d", &n, &m) != EOF)
    {
        vector <int> v, z;
        map <string, int> p;
        map <string, int> :: iterator ii;
        string s;
        for(i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        for(i = 0; i < m; i++)
        {
            cin >> s;
            p[s]++;
        }

        for(ii = p.begin(); ii != p.end(); i++)
        {
            int k = (*ii).second;
            z.push_back(k);
        }

        sort(z.rbegin(), z.rend());
        sort(v.begin(), v.end());

        for(i = 0, min = 0; i < z.size(); i++)
        {
            min += v[i]*z[i];
        }
        cout << min << endl;

        sort(v.rbegin(), v.rend());
        for(i = 0, max = 0; i < z.size(); i++)
        {
            max += v[i]*z[i];
        }
        cout << max;
    }

    return 0;
}

*/
