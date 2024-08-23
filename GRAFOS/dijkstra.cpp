
#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>

using namespace std;

vector<int> dijkstra(const vector<vector<pair<int, int>>> &g, int N, int s, vector<int> &p)
{
    vector<bool> visited(N, false);
    vector<int> dist(N, INT_MAX); // puede ser double
    dist[s] = 0;
    priority_queue<pair<int, int>> ipq;
    ipq.push(pair<int, int>(0, s));
    p[0] = s;
    while (ipq.size() != 0)
    {
        auto t = ipq.top();
        int index = t.second;
        if (!visited[index])
        {
            for (auto neighbor : g[index])
            {
                if (visited[neighbor.first])
                    continue;
                int newDist = dist[index] + neighbor.second;
                if (newDist < dist[neighbor.first])
                {
                    dist[neighbor.first] = newDist;
                    ipq.push(pair<int, int>(-newDist, neighbor.first));
                    p[neighbor.first] = index;
                }
            }
            visited[index] = true;
        }
        ipq.pop();
    }
    return dist;
}

void printGraph(const vector<vector<pair<int, int>>> &graph)
{
    for (int i = 0; i < graph.size(); i++)
    {
        if (graph[i].size() > 0)
        {
            cout << i << " -> [ ";
            for (int j = 0; j < graph[i].size(); j++)
            {
                if (graph[i][j].first != -1)
                    cout << "(" << graph[i][j].first << "," << graph[i][j].second << ")"
                         << ", ";
            }
            cout << " ]" << endl;
        }
    }
}

void printPath(const vector<vector<pair<int, int>>> &graph, int s, int d, vector<int> &p)
{
    if (s == d)
    {
        cout << s;
        return;
    }
    printPath(graph, s, p[d], p);
    cout << " - " << d;
}

int main()
{
    int N = 8;
    vector<vector<pair<int, int>>> g; // grafo como lista de listas, el primer valor del par representa el NODO y el segundo representa el PESO de la arista
    vector<int> p(N, -1);             // p guarda todos los padres/predecesores del camino mas corto
    vector<pair<int, int>> adj;
    adj.push_back(pair<int, int>(1, 3));
    adj.push_back(pair<int, int>(2, 1));
    g.push_back(adj);
    adj.clear();
    adj.push_back(pair<int, int>(0, 3));
    adj.push_back(pair<int, int>(3, 1));
    adj.push_back(pair<int, int>(6, 5));
    g.push_back(adj);
    adj.clear();
    adj.push_back(pair<int, int>(0, 1));
    adj.push_back(pair<int, int>(3, 2));
    adj.push_back(pair<int, int>(5, 5));
    g.push_back(adj);
    adj.clear();
    adj.push_back(pair<int, int>(1, 1));
    adj.push_back(pair<int, int>(2, 2));
    adj.push_back(pair<int, int>(4, 4));
    adj.push_back(pair<int, int>(5, 2));
    g.push_back(adj);
    adj.clear();
    adj.push_back(pair<int, int>(3, 4));
    adj.push_back(pair<int, int>(7, 1));
    adj.push_back(pair<int, int>(6, 2));
    g.push_back(adj);
    adj.clear();
    adj.push_back(pair<int, int>(2, 5));
    adj.push_back(pair<int, int>(3, 2));
    adj.push_back(pair<int, int>(7, 3));
    g.push_back(adj);
    adj.clear();
    adj.push_back(pair<int, int>(1, 5));
    adj.push_back(pair<int, int>(4, 2));
    g.push_back(adj);
    adj.clear();
    adj.push_back(pair<int, int>(4, 1));
    adj.push_back(pair<int, int>(5, 3));
    g.push_back(adj);
    adj.clear();
    cout << "---------------GRAFO----------------------" << endl;
    printGraph(g);
    vector<int> dists = dijkstra(g, N, 0, p);
    cout << "---------------DISTANCIAS DESDE NODO FUENTE HASTA CADA NODO DESTINO----------------------" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "i = " << i << " dist= " << dists[i] << endl;
    }
    cout << "--------------CAMINO MAS CORTO DESDE NODO INICIAL A NODO DESTINO-----------------------" << endl;
    printPath(g, 0, 7, p);
}