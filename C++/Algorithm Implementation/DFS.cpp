#include <bits/stdc++.h>
using namespace std;
class graph
{
public:
  map<int, bool> visited;
  map<int, list<int> > adjacent;
  void addEdge(int v, int w);
  void DFS(int v);
};
void graph::addEdge(int v, int w)
{
  adjacent[v].push_back(w);
}
void graph::DFS(int v)
{
  visited[v] = true;
  cout << v << " ";
  list<int>::iterator i;//will look at all elements in a list
  for (i = adjacent[v].begin(); i != adjacent[v].end(); ++i)
    if (!visited[*i])
      DFS(*i);
}
int main()
{
  graph g;
  g.addEdge(0, 1);
  g.addEdge(0, 9);
  g.addEdge(1, 2);
  g.addEdge(2, 0);
  g.addEdge(2, 3);
  g.addEdge(9, 3);
  cout << "The Depth First Traversal is: \n";
  g.DFS(1);
  return 0;
}
