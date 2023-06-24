#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *pLeft;
    node *pRight;
    node(int x)
    {
        this->data = x;
        pLeft = pRight = NULL;
    }
};
void Add(node *&T, int u, int v, char c)
{
    if (T == NULL)
    {
        T = new node(u);
        node *p = new node(v);
        if (c == 'L')
            T->pLeft = p;
        else
            T->pRight = p;
    }
    else
    {
        if (T->data == u)
        {
            node *p = new node(v);
            if (c == 'L')
                T->pLeft = p;
            else
                T->pRight = p;
        }
        else
        {
            if (T->pLeft != NULL)
                Add(T->pLeft, u, v, c);
            if (T->pRight != NULL)
                Add(T->pRight, u, v, c);
        }
    }
}

void Load(node *T)
{
    if (T == NULL)
        return;
    stack<node *> S1, S2;
    S1.push(T);
    while (S1.size() || S2.size())
    {
        while (S1.size())
        {
            node *tmp = S1.top();
            S1.pop();
            cout << tmp->data << " ";
            if (tmp->pRight != NULL)
                S2.push(tmp->pRight);
            if (tmp->pLeft != NULL)
                S2.push(tmp->pLeft);
        }
        while (S2.size())
        {
            node *tmp = S2.top();
            S2.pop();
            cout << tmp->data << " ";
            if (tmp->pLeft != NULL)
                S1.push(tmp->pLeft);
            if (tmp->pRight != NULL)
                S1.push(tmp->pRight);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        node *T = NULL;
        for (int i = 0; i < n; i++)
        {
            int u, v;
            char c;
            cin >> u >> v >> c;
            Add(T, u, v, c);
        }
        Load(T);
        cout << endl;
    }
}
