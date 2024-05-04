#include "bits/stdc++.h"
using namespace std;
typedef struct node
{
    int val;
    node *left;
    node *right;
    node() : val(0), left(NULL), right(NULL){};
    node(int x) : val(x), left(NULL), right(NULL){};
    node(int x, node *lptr, node *rptr) : val(x), left(lptr), right(rptr){};
};
class tree
{
public:
    void preOrder(node *bt)
    {
        if (bt == NULL)
        {
            return;
        }
        cout << bt->val << "\t";
        preOrder(bt->left);
        preOrder(bt->right);
    }
    void inOrder(node *bt)
    {
        if (bt == NULL)
        {
            return;
        }
        inOrder(bt->left);
        cout << bt->val << "\t";
        inOrder(bt->right);
    }
    void postOrder(node *bt)
    {
        if (bt == NULL)
        {
            return;
        }
        postOrder(bt->left);
        postOrder(bt->right);
        cout << bt->val << "\t";
    }
    void DFS(node *bt)
    {
        cout << "Pre-Order Traversal" << endl;
        preOrder(bt);
        cout<<endl;
        cout << "In-Order Traversal" << endl;
        inOrder(bt);
        cout<<endl;
        cout << "Post-Order Traversal" << endl;
        postOrder(bt);
        cout<<endl;
    }
    vector<vector<int>> BFS(node *bt)
    {
        queue<node *> q;
        vector<vector<int>> answers;
        q.push(bt);
        while (!q.empty())
        {
            vector<int> level;
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                node *temp = q.front();
                level.emplace_back(temp->val);
                if (temp->left != NULL)
                {
                    q.push(temp->left);
                }
                if (temp->right != NULL)
                {
                    q.push(temp->right);
                }
                q.pop();
            }
            answers.push_back(level);
        }
        return answers;
    }
};

int main()
{
    tree bt;
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4, NULL, NULL);
    root->left->right = new node(5, NULL, NULL);
    root->right->left = new node(6, NULL, NULL);
    root->right->right = new node(7, NULL, NULL);
    bt.DFS(root);
    vector<vector<int>> bfs=bt.BFS(root);
    cout<<"BFS"<<endl;
    for(int i=0;i<bfs.size();i++)
    {
        for(int j=0;j<bfs[i].size();j++)
        {
            cout<<bfs[i][j];
        }
        cout<<endl;
    }
}