n = 4 
dist = [[0, 0, 0, 0, 0], [0, 0, 10, 15, 20], [
        0, 10, 0, 25, 25], [0, 15, 25, 0, 30], [0, 20, 25, 30, 0]]

memo = [[-1]*(1 << (n+1)) for _ in range(n+1)]


def fun(i, mask):

    if mask == ((1 << i) | 3):
        return dist[1][i]

    if memo[i][mask] != -1:
        return memo[i][mask]

    res = 10**9  

   
    for j in range(1, n+1):
        if (mask & (1 << j)) != 0 and j != i and j != 1:
            res = min(res, fun(j, mask & (~(1 << i))) + dist[j][i])
    memo[i][mask] = res  
    return res


ans = 10**9
for i in range(1, n+1):

    ans = min(ans, fun(i, (1 << (n+1))-1) + dist[i][1])

print("The cost of most efficient tour = " + str(ans))

# This code is contributed by Serjeel Ranjan


# Function to find BFS of Graph from given source s
def bfsOfGraph(adj, s):
    
    # get number of vertices
    V = len(adj)
    
    # create an array to store the traversal
    res = []
    
    # Create a queue for BFS
    from collections import deque
    q = deque()
    
    # Initially mark all the vertices as not visited
    visited = [False] * V
    
    # Mark source node as visited and enqueue it
    visited[s] = True
    q.append(s)
    
    # Iterate over the queue
    while q:
        
        # Dequeue a vertex from queue and store it
        curr = q.popleft()
        res.append(curr)
        
        # Get all adjacent vertices of the dequeued 
        # vertex curr If an adjacent has not been 
        # visited, mark it visited and enqueue it
        for x in adj[curr]:
            if not visited[x]:
                visited[x] = True
                q.append(x)
                
    return res

if __name__ == "__main__":
    
    # create the adjacency list
    # [ [2, 3, 1], [0], [0, 4], [0], [2] ]
    adj = [ [2, 3, 1], [0], [0, 4], [0], [2] ]
    src = 0
    ans = bfsOfGraph(adj, src)
    for i in ans:
        print(i, end=" ")
