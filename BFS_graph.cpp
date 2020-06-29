# include <bits/stdc++.h>
using namespace std;
class Graph
{
    int V;
    list <int> *adj;
public:
    Graph(int v);
    void addedge(int s,int endi);
    void BFS(int s);
};
Graph::Graph(int v)
{
    V=v;
    adj= new list<int>[V];
}
void Graph:: addedge(int s, int endi)
{
    adj[s].push_back(endi);
}
void Graph:: BFS(int s)
{
    list <int> queue;
    bool *arr=new bool[V];
    for (int i=0;i<V;i++)
        arr[i]=false;
    arr[s]=true;
    queue.push_back(s);
    list<int>::iterator i;

    while (!queue.empty())
    {
        int curr=queue.front();
        cout<<curr<<" ";
        queue.pop_front();
        for( i=adj[curr].begin();i!=adj[curr].end();i++)
        {
            if (!arr[*i])
            {
                arr[*i]=true;
                queue.push_back(*i);
            }
        }
    }

}
int main()
{
    Graph g(4);
    g.addedge(0, 1);
    g.addedge(0, 2);
    g.addedge(1, 2);
    g.addedge(2, 0);
    g.addedge(2, 3);
    g.addedge(3, 3);
    g.BFS(2);
    return 0;
}
