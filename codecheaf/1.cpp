vector<int> graph[100000];
int visit[100000], dist[100000], parent[100000];
vector<int> lv[10000];
void BFS(int source)
{
    queue<int> q;
    q.push(source);
    visit[source] = 1;
    while (!q.empty())
    {
        int ft = q.front();
        q.pop();
        for (int i = 0; i < graph[ft].size(); i++)
        {
            int child = graph[ft][i];
            if (!visit[child])
            {
                visit[child] = 1;
                parent[child] = ft;
                dist[child] = dist[ft] + 1;
                q.push(child);
            }
        }
    }
}
void print_path(int node, int source)
{
    vector<int> path;
    while (node != source)
    {
        path.push_back(node);
        node = parent[node];
    }
    path.push_back(source);
    reverse(path.begin(), path.end());
    for (int i = 0; i < path.size(); i++)
        cout << path[i] << " ";
    cout << endl;
}
int main()
{

    freopen("output.txt", "w", stdout);
    int nodes, edges;
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int source;
    cin >> source;
    BFS(source);
    lv[1].push_back(source);
    for (int i = 0; i < nodes; i++)
    {
        if (source == i)
            continue;
        if (dist[i] == 0)
        {
            continue;
        }
        lv[dist[i] + 1].push_back(i);
    }
    for (int i = 0; i < nodes; i++)
    {
        if (source == i)
            continue;
        if (dist[i] == 0)
        {
            cout << "no path" << endl;
            continue;
        }
        print_path(i, source);
    }
    for (int i = 1; i <= nodes; i++)
    {
        cout << i << ": ";
        for (int j = 0; j < lv[i].size(); j++)
            cout << lv[i][j] << ",";
        cout << endl;
    }

    return 0;
}