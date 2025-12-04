//Question 1
// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;
//
// int main() {
//     int V, E;
//     cin >> V >> E;
//
//     vector<vector<int>> adj(V);
//     for (int i = 0; i < E; i++) {
//         int u, v;
//         cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u); // undirected
//     }
//
//     int start;
//     cin >> start;
//
//     vector<int> vis(V, 0);
//     queue<int> q;
//
//     q.push(start);
//     vis[start] = 1;
//
//     while (!q.empty()) {
//         int node = q.front();
//         q.pop();
//         cout << node << " ";
//
//         for (int neigh : adj[node]) {
//             if (!vis[neigh]) {
//                 vis[neigh] = 1;
//                 q.push(neigh);
//             }
//         }
//     }
//
//     return 0;
// }




//Question 2
// #include <iostream>
// #include <vector>
// using namespace std;
//
// void dfs(int node, vector<vector<int>>& adj, vector<int>& vis) {
//     vis[node] = 1;
//     cout << node << " ";
//
//     for (int neigh : adj[node]) {
//         if (!vis[neigh]) dfs(neigh, adj, vis);
//     }
// }
//
// int main() {
//     int V, E;
//     cin >> V >> E;
//
//     vector<vector<int>> adj(V);
//
//     for (int i = 0; i < E; i++) {
//         int u, v;
//         cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//
//     int start;
//     cin >> start;
//
//     vector<int> vis(V, 0);
//
//     dfs(start, adj, vis);
//
//     return 0;
// }



//Question 3
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <queue>
// using namespace std;
//
// struct DSU {
//     vector<int> parent, rank;
//     DSU(int n) : parent(n), rank(n, 0) {
//         for (int i = 0; i < n; i++) parent[i] = i;
//     }
//     int find(int x) {
//         if (parent[x] == x) return x;
//         return parent[x] = find(parent[x]);
//     }
//     bool unite(int a, int b) {
//         a = find(a);
//         b = find(b);
//         if (a == b) return false;
//         if (rank[a] < rank[b]) swap(a, b);
//         parent[b] = a;
//         if (rank[a] == rank[b]) rank[a]++;
//         return true;
//     }
// };
//
// int main() {
//     int V, E;
//     cin >> V >> E;
//
//     vector<tuple<int, int, int>> edges;
//     vector<vector<pair<int, int>>> adj(V);
//
//     for (int i = 0; i < E; i++) {
//         int u, v, w;
//         cin >> u >> v >> w;
//         edges.push_back({w, u, v});
//         adj[u].push_back({v, w});
//         adj[v].push_back({u, w});
//     }
//
//     // ---- KRUSKAL ----
//     sort(edges.begin(), edges.end());
//     DSU dsu(V);
//     int kruskalCost = 0;
//
//     for (auto& e : edges) {
//         int w, u, v;
//         tie(w, u, v) = e;
//         if (dsu.unite(u, v)) kruskalCost += w;
//     }
//
//     cout << "Kruskal MST Cost: " << kruskalCost << endl;
//
//     // ---- PRIM ----
//     vector<int> vis(V, 0);
//     priority_queue< tuple<int, int, int>,
//         vector<tuple<int, int, int>>,
//         greater<tuple<int, int, int>> > pq;
//
//     pq.push({0, 0, -1}); // weight, node, parent
//     int primCost = 0;
//
//     while (!pq.empty()) {
//         auto [w, node, parent] = pq.top();
//         pq.pop();
//
//         if (vis[node]) continue;
//         vis[node] = 1;
//         primCost += w;
//
//         for (auto& ed : adj[node]) {
//             int neigh = ed.first;
//             int wt = ed.second;
//             if (!vis[neigh]) pq.push({wt, neigh, node});
//         }
//     }
//
//     cout << "Prim MST Cost: " << primCost << endl;
//
//     return 0;
// }



//Question 4
// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;
//
// vector<long long> dijkstra(int V, vector<vector<pair<int, int>>>& adj, int src) {
//     const long long INF = 1e18;
//     vector<long long> dist(V, INF);
//     dist[src] = 0;
//
//     priority_queue< pair<long long, int>,
//         vector<pair<long long, int>>,
//         greater<pair<long long, int>> > pq;
//
//     pq.push({0, src});
//
//     while (!pq.empty()) {
//         auto [d, u] = pq.top();
//         pq.pop();
//
//         if (d > dist[u]) continue;
//
//         for (auto& p : adj[u]) {
//             int v = p.first;
//             int w = p.second;
//
//             if (dist[v] > dist[u] + w) {
//                 dist[v] = dist[u] + w;
//                 pq.push({dist[v], v});
//             }
//         }
//     }
//     return dist;
// }
//
// int main() {
//     int V, E;
//     cin >> V >> E;
//
//     vector<vector<pair<int, int>>> adj(V);
//
//     for (int i = 0; i < E; i++) {
//         int u, v, w;
//         cin >> u >> v >> w;
//         adj[u].push_back({v, w});
//     }
//
//     int src;
//     cin >> src;
//
//     auto dist = dijkstra(V, adj, src);
//
//     for (int i = 0; i < V; i++) {
//         if (dist[i] == 1e18) cout << "INF ";
//         else cout << dist[i] << " ";
//     }
//
//     return 0;
// }
