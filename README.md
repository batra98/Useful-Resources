## Useful Resources for Placement 2020
A to-do list of programing and non-programing topics to study.

---

### CP related topics

#### Complexity analysis
- [Cheat Sheet](https://www.bigocheatsheet.com/)

#### Data Structures
- Arrays
- Linked Lists
- Stack
  - [Nearest Smallest number on left](https://www.geeksforgeeks.org/find-the-nearest-smaller-numbers-on-left-side-in-an-array/)
- Queue

#### Advanced Data Structures
- Hash Table [unordered set,map in C++]

#### Search
- Binary search [upper_bound(), lower_bound(), binary_search() in C++]
- Binary search on solution
- Ternary search
  - **Theory**
    - [Ternary Search and its applications](https://cp-algorithms.com/num_methods/ternary_search.html?fbclid=IwAR1LVwQ1WITShxj_SzG3xHwxR7WhMgCW28fyX7O_MYV9f0nPCdbK3XIGrZo)
  - **Problems**

#### Bit Operations
- Bitmasking
- Bitwise Operations
  - [AND in l to r](https://leetcode.com/contest/weekly-contest-198/problems/find-a-value-of-a-mysterious-function-closest-to-target/).

#### Trees & Graphs
- Binary Search Trees (BSTs).
- Heap
- Trie
 - [Pair with Minimum Xor](https://www.geeksforgeeks.org/minimum-xor-value-pair/).
- Segment Trees
- AVL [theory]

#### Graph Algorithms
  - **[DFS](https://cp-algorithms.com/graph/depth-first-search.html)**
    - lexicographic shortest path
    - topological sorting
    - **[components](https://stackoverflow.com/questions/31137543/how-many-components-in-a-directed-graph)**
  - **[BFS](https://cp-algorithms.com/graph/breadth-first-search.html)**
    - shortest paths in unweighted or weighted with constraints
  - cycle detection
    - directed graph
    - undirected graph
  - tree specific (tree is always undirected)
    - ONLY 1 PATH between two nodes
    - LCA [used to find distance between two nodes]
      - Naive O(N)
      - Using euler tour
      - Lec: 18 class notes
  - shortest paths (SSSP)
    - topo sort approach in DAG
    - **[bellman ford](https://cp-algorithms.com/graph/bellman_ford.html)**
      - identify negative weight cycle (reachable from source)
      - SSSP for any general graph
    - dijkstra
  - spanning trees (for weighted connected undirected graph)
    - cycle and cut property
    - prim's algorithm (selects vertices in mst)
    - **[prim O(N^2) modification for dense graph](https://cp-algorithms.com/graph/mst_prim.html#toc-tgt-4)**
    - kruskal's algorithm (selects edges in mst)
    - DSU
  - shortest paths (APSP)
    - repeated squaring (V^3logV)
    - floyd warshall (V^3)
    - johnsons algorithm (V(V+E)logV)

#### Sorting
- inversion count
- comparison between different algos
- custom sort in C++

#### Recursion

#### Hashing

#### DP
  - knapsack
    - **[01 knapsack](https://www.tutorialspoint.com/design_and_analysis_of_algorithms/design_and_analysis_of_algorithms_01_knapsack.htm)**
    - fractional knapsack (greedy by sorting based on value/weight ratio)
  - LIS
  - coin change
  - edit distance
  - subset sum (similar to knapsack and coin change)
  - minsum partition
  - longest common subsequence
  - **[longest common substring](https://www.geeksforgeeks.org/longest-common-substring-dp-29/)**
  - longest pailndromic subsequence
  - longest palindromic substring
  - PRINTING DP
  - **[max subarray](https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/)**

#### Strings
- Palindrome problems
  -[Longest Panlindromic Substring](https://www.geeksforgeeks.org/longest-palindromic-substring-set-2/?ref=rp).

#### Number Theory
- GCD
- permutation [also inbuilt in C++]
- Prime factorization
- Prime sieve
- FEP
- modular operations
- Fibonacci series
- Combinatorics
- Probability [Specific to finance companies]
- newton method of square root

#### Standard Problems
- Histogram using stacks
- Linked list loop detection

#### CP Theoretical
- NP, NP-Complete
- Approximate Algorithms

### Miscellaneous
- [Atcoder Alsing D - Maths](https://atcoder.jp/contests/aising2020/tasks/aising2020_d)
- [Recursion Tree](https://leetcode.com/problems/reaching-points/)
- [Partition into K equal sum subsets](https://leetcode.com/problems/partition-to-k-equal-sum-subsets/).
- https://leetcode.com/problems/minimum-number-of-increments-on-subarrays-to-form-a-target-array/.

---

### Non CP related topics

### Javascript
- callbacks
- promise
- event loop
- closure
- async-await
- generators
- prototypes - methods
- prototype Inheritance
- event bubbling
- sets
- local storage and cache
- Array functions - reduce
- call, apply, bind
- XMLHTTPRequest | Ajax
- binding - new, explicit, implicit
- web APIs

#### Object-Oriented Programming

#### Operating System
- Cache
  - **LRU Cache**
    - **Theory**
      - [The Magic of LRU Cache (100 Days of Google Dev)](https://www.youtube.com/watch?v=R5ON3iwx78M)
      - [Implementing LRU](https://www.youtube.com/watch?v=bq6N7Ym81iI)
- Processes and Threads
  - [Operating Systems](https://archive.org/details/ucberkeley-webcast-PL-XXv-cvA_iBDyz-ba4yDskqMDY6A1w_c).
  - **Main Topics**
    - Processes, Threads and Concurrency.
      - Processes
      - Threads
      - [Difference between process and threads](https://www.quora.com/What-is-the-difference-between-a-process-and-a-thread).
      - Locks
      - Mutexes
      - Semaphores
      - Monitors
      - Deadlock
    - Interrupts, Context Switching.
    - Paging, Segmentation and Virtual Memeory.
- Scheduling
- Endianess

#### Computer Networks

#### Unix Command line tools

#### Distributed Systems

#### Database Systems

---

### HR Questions
- Tell me about yourself

---

### Previous Year

---
