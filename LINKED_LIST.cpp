#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int x, node *y)
    {
        data = x;
        next = y;
    }
};

void traverse(node *head)
{
    node *mover = head;
    while (mover->next)
    {

        cout << "[" << " " << mover->data << " " << "," << " " << mover->data << "->" << "address of " << mover->next->data << " " << ":" << " " << "mover->" << mover->data << "]" << " "; // mover pointing to head.
        mover = mover->next;
    }
    cout << "[" << " " << mover->data << " " << "," << " " << mover->data << "->" << "nullptr" << " " << ":" << " " << "mover->" << mover->data << "]" << " ";
    cout << endl;
}

node *array_to_linkedlist(vector<int> nums)
{
    node *head = new node(nums[0], nullptr);
    node *mover = head;

    for (int i = 1; i < nums.size(); i++)
    {
        node *temp = new node(nums[i], nullptr);
        mover->next = temp;
        mover = mover->next;
    }

    traverse(head);
    return head;
}

int main()
{

    vector<int> input = {1, 2, 3, 4, 5};
    int n = input.size();

    node *x = array_to_linkedlist(input);

    return 0;
}