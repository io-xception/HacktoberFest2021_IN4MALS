#include <bits/stdc++.h>
#include "Treenode.h"
using namespace std;
void printTreeInefficient(Treenode<int> *root)
{
    cout << root->data << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTreeInefficient(root->children[i]);
    }
}
void printTreeEfficient(Treenode<int> *root)
{
    cout << root->data << ":";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i] << ", ";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTreeEfficient(root->children[i]);
    }
}

int main()
{

    return 0;
}