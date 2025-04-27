/*
 * In case when graph is divided into multiple components.
 * Always use a visited array of size n(no. of edges)
  for(int i=0;i<n;i++) {
     if(!vis[i]) {
        traverse(i);  // It traverses the entire component
    }
  }
  */