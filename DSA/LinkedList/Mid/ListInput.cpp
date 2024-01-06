#include <bits/stdc++.h>
using namespace std;

int main(){

    list<int> myList;

    int val;

    while(true){
        cin>>val;

        if(val == -1){
            break;
        }
        myList.push_back(val);

    }
 myList.erase(next(myList.begin(), 2));
    for (int val : myList)
    {
        cout << val << endl;
    }

    return 0;
}