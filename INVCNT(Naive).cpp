#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <climits>
#include <stack>
#include <queue>
#include <sstream>
#include <map>
using namespace std;

int main()
{
    int tc;
    scanf("%d",&tc);

    while(tc--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        int cnt = 0;
        for(int i = 0; i < n; ++i)
        {
            scanf("%d",&arr[i]);
        }
        for(int i = 0; i < n; ++i)
        {
            for(int j = i + 1; j < n; ++j)
            {
                if(arr[i] > arr[j])
                    cnt++;
            }
        }
        printf("%d\n",cnt);
    }
}
