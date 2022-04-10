#include<iostream>
#include<list>
#include<map>
using namespace std;

class Graph {
public:
    map<int, bool> visited;
    map<int, list<int> > adj;
 
    // function to add an edge to graph
    void addEdge(int v, int w);
 
    // DFS traversal of the vertices
    // reachable from v
    void DFS(int v);
};
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}
 
void Graph::DFS(int v)
{
    // Mark the current node as visited and
    // print it
    visited[v] = true;
    cout << v << " ";
 
    // Recur for all the vertices adjacent
    // to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFS(*i);
}
 


int main(){
int n, m, s;
cout<<"Enter the number of vertices in graph: "<<endl;
cin>>n;
cout<<"Enter the number of edges in graph: "<<endl;
cin>>m;
Graph g;
for(int i=0; i<m; i++){
    int p, q;
    cout<<"Enter the source vertex: "<<endl;
    cin>>p;
    cout<<"Enter the destination vertex: "<<endl;
    cin>>q;
    g.addEdge(p, q);
}
cout<<"Enter the starting vertex to print DFS: "<<endl;
cin>>s;
g.DFS(s);
return 0;
}