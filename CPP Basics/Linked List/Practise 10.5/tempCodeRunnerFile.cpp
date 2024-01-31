void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        // cout<<"Inserted"<<endl;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
    // cout<<"Inserted"<<endl;
}