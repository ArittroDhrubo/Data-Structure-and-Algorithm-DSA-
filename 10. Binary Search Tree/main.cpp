#include <iostream>
#include "binarysearchtree.h"
#include "quetype.h"

using namespace std;

void insertRecursively(TreeType<int> &newTree, int array[], int start, int end) {
    int mid = (start + end) / 2;
    newTree.InsertItem(array[mid]);

    if (start == end)
        return;

    if (start < mid)
        insertRecursively(newTree, array, start, mid - 1);

    insertRecursively(newTree, array, mid + 1, end);
}

int main(void)
{
    TreeType<int> tree;

    if(tree.IsEmpty())
    {
        cout << "Tree is empty." << endl;
    }
    else
    {
        cout << "Tree is not empty." << endl;
    }

    tree.InsertItem(4);
    tree.InsertItem(9);
    tree.InsertItem(2);
    tree.InsertItem(7);
    tree.InsertItem(3);
    tree.InsertItem(11);
    tree.InsertItem(17);
    tree.InsertItem(0);
    tree.InsertItem(5);
    tree.InsertItem(1);

    if(tree.IsEmpty())
    {
        cout << "Tree is empty." << endl;
    }
    else
    {
        cout << "Tree is not empty." << endl;
    }

    cout << "Length of the tree: " << tree.LengthIs() << endl;

    int item = 9;
    bool found;

    tree.RetrieveItem(item,found);

    if(found)
    {
        cout << "Item found." << endl;
    }
    else{
        cout << "Item not found." << endl;
    }

    item = 13;

    tree.RetrieveItem(item,found);

    if(found)
    {
        cout << "Item found." << endl;
    }
    else{
        cout << "Item not found." << endl;
    }

    tree.ResetTree(IN_ORDER);
    bool finish = false;
    while (!finish) {
        int value;
        tree.GetNextItem(value, IN_ORDER, finish);
        cout << value << " ";
    }
    cout << endl;

    tree.ResetTree(PRE_ORDER);
    finish = false;
    while (!finish) {
        int value;
        tree.GetNextItem(value, PRE_ORDER, finish);
        cout << value << " ";
    }
    cout << endl;

    tree.ResetTree(POST_ORDER);
    finish = false;

    while(!finish)
    {
        int value;
        tree.GetNextItem(value,POST_ORDER,finish);
        cout << value << " ";
    }

    cout << endl;

    tree.MakeEmpty();

    if(tree.IsEmpty())
    {
        cout << "Tree is empty." << endl;
    }
    else
    {
        cout << "Tree is not empty." << endl;
    }

    TreeType<int> sequenceTree;
    int num = 10;
    int sequence[] = {11, 9, 4, 2, 7, 3, 17, 0, 5, 1};

    for (int i = 0; i < num; i++)
    {
        sequenceTree.InsertItem(sequence[i]);
    }

    int n, arr[15], index = 0;

    sequenceTree.ResetTree(IN_ORDER);
    finish = false;
    while (!finish) {
        sequenceTree.GetNextItem(n, IN_ORDER, finish);
        arr[index++] = n;
    }

    TreeType<int> newTree;

    insertRecursively(newTree, arr, 0, index - 1);

    newTree.ResetTree(PRE_ORDER);
    finish = false;
    while (!finish) {
        newTree.GetNextItem(n, PRE_ORDER, finish);
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
