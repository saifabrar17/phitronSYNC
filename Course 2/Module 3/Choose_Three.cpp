#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_case;
    cin >>test_case;

    while (test_case--)
    {
        int n , s;
        cin >> n >> s;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a+n);

        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            int left = i+1;
            int right = n-1;
            while (left < right)
            {
                int sum = a[i] + a[left] + a[right];
                if(sum == s){
                    flag = true;
                    break;
                }
                else if(sum < s){
                    left++;
                }else{
                    right--;
                }
            }
            
        }
        flag ? cout<<"YES\n" : cout<<"NO\n";
        
    }
    

    return 0;
}