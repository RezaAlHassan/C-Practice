#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
class graph
{
public:
  map<int, bool> visited;
  map<int, list<int> > adjacent;
  void addEdge(int v, int w);
  void DFS(int v, vector<int> &departure, int &time );
  void doTopologicalSort(int n);
};
void graph::addEdge(int v, int w)
{
  adjacent[v].push_back(w);
}
void graph::DFS(int v, vector<int> &departure, int &time )
{//visited=discovered
  visited[v] = true;
   time++;
  cout << v << " ";
  list<int>::iterator i;//will look at all elements in a list
  for (i = adjacent[v].begin(); i != adjacent[v].end(); ++i){
    if (!visited[*i]){
      DFS(*i, departure, time );}
      }
      departure[time] = v;
    time++;
}


void graph::doTopologicalSort( int n )
{
    // departure[] stores the vertex number using departure time as an index
    vector<int> departure(2*n, -1);

    /* If we had done it the other way around, i.e., fill the array
       with departure time using vertex number as an index, we would
       need to sort it later */

    // to keep track of whether a vertex is discovered or not
    vector<bool> discovered(n);
    int time = 0;

    // perform DFS on all undiscovered vertices
    for (int i = 0; i < n; i++)
    {
        if (!discovered[i]) {
           DFS(*i, departure, time );
        }
    }

    for (int i = 2*n - 1; i >= 0; i--)
    {
        if (departure[i] != -1) {
            cout << departure[i] << " ";
        }
    }
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
  int n = 8;
  //g.DFS(1);
  g.doTopologicalSort(n);
  return 0;
}
