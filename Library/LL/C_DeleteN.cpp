#pragma GCC optimize "trapv"
#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3", "unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fab(a, b, i) for (int i = a; i < b; ++i)
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
#define f first
#define se second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
#define endl '\n'
#define blaze ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
typedef long long int ll;
//=======================
const int N = 2e6 + 13, M = N;
//=======================
int a[N];
int c, k, m, n, t, x, y;
//=======================

// Delete a node at the nth position

struct Node
{
  int data;
  Node *next;
};

Node *Insert(int data, int n, Node *head)
{
  Node *temp1 = new Node;
  temp1->data = data;
  temp1->next = NULL;
  Node *temp2 = head;
  if (n == 1)
  {
    temp1->next = temp2;
    head = temp1;
    return head;
  }
  fab(0, n - 2, i)
  {
    temp2 = temp2->next;
  }
  temp1->next = temp2->next;
  temp2->next = temp1;
  return head;
}

void Print(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

Node *Delete(int n, Node *head)
{
  Node *temp1 = head;
  if (n == 1)
  {
    head = temp1->next;
    delete temp1;
    return head;
  }
  fab(0, n - 2, i)
  {
    temp1 = temp1->next;
  }
  Node *temp2 = temp1->next;
  temp1->next = temp2->next;
  delete temp2;
  return head;
}

int main()
{
  blaze;
  Node *head = NULL;
  head = Insert(2, 1, head);
  head = Insert(3, 2, head);
  head = Insert(4, 1, head);
  head = Insert(5, 2, head);
  Print(head);
  cout << endl;
  head = Delete(1, head);
  Print(head);
  return 0;
}
