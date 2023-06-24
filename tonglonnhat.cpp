#include <bits/stdc++.h>
using namespace std;
int n;
struct Node
{
    int data;
    Node *left, *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
void makeNode(Node *root, int b, int c)
{
    if (c == 'L')
        root->left = new Node(b);
    else
        root->right = new Node(b);
}
void findNode(Node *root, int a, int b, int c)
{
    if (!root)
        return;
    if (root->data == a)
        makeNode(root, b, c);
    else
    {
        findNode(root->left, a, b, c);
        findNode(root->right, a, b, c);
    }
}
long long maxPath(Node *root, long long &res)
{
    if (!root)
        return 0;
    if (!root->left && !root->right)
        return root->data;
    long long ls = maxPath(root->left, res);
    long long rs = maxPath(root->right, res);
    if (root->left && root->right)
    {
        res = max(ls + rs + root->data, res);
        return max(ls, rs) + root->data;
    }
    if (!root->left)
        return rs + root->data;
    return ls + root->data;
}
long long maxPathSum(Node *root)
{
    long long res = LONG_LONG_MIN;
    maxPath(root, res);
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a, b;
        char c;
        Node *root = NULL;
        while (n--)
        {
            cin >> a >> b >> c;
            if (!root)
            {
                root = new Node(a);
                makeNode(root, b, c);
            }
            else
                findNode(root, a, b, c);
        }
        cout << maxPathSum(root) << endl;
    }
    return 0;
}
