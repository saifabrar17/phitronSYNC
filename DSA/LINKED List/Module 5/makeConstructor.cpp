#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next; //next diye next node bujhaitesi

    Node(int val){
        this ->val = val;
        this ->next = NULL;
    }
};
int main(){

    Node a(110);
    Node b(201);
    a.next=&b;
    

    cout<<a.val<<endl;
    cout<<a.next->val<<endl;
    return 0;
}