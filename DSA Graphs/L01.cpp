// Graph representation

/*

     1
    /
   2
  / \
 3   4
 \  / \
   5   6

/******************** ADJACENCY MATRIX **************************


  | 1	2	3	4	5	6
----------------------------
1 |	0	1	0	0	0	0

2 |	1 	0	0	0	0	0	

3 | 0	1	0	0	1	0

4 | 0 	1	0	0	1	1

5 |	0	0	1	1	0	0

6 |	0 	0	0	1	0	0


/******************** ADJACENCY LIST ***************************

1 	2
2 	1 -> 3 -> 4
3 	2 -> 5
4 	2 -> 5 -> 6
5 	3 -> 4
6 	4

No. of nodes :N
No. of edges :M

vector<int> ar[N+1];

while(M--){
	cin>>a>>b;
	ar[a].push_back(b);
	ar[b].push_back(a);
}

*/