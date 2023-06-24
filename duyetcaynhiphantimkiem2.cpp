#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *pl;
    node *pr;
    node(int x)
    {
        this->data = x;
        pr = pl = NULL;
    }
};
void Add(node *&T, int x)
{
    if (!T)
        T = new node(x);
    else
    {
        if (x < T->data)
            Add(T->pl, x);
        else
            Add(T->pr, x);
    }
}
void Load(node *T)
{
    if (!T)
        return;
    if (T->pl)
        Load(T->pl);
    if (T->pr)
        Load(T->pr);
    cout << T->data << " ";
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
        while (n--)
        {
            int x;
            cin >> x;
            Add(T, x);
        }
        Load(T);
        cout << endl;
    }
}