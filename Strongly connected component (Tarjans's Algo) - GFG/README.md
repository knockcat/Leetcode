# Strongly connected component (Tarjans's Algo)
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a Directed Graph with V vertices and E edges</span>, <span style="font-size: 18px;"> Find the members of strongly connected components in the graph.</span></p>
<p><br><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:</strong></span>
<img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/701448/Web/Other/5acd4877-d36c-4d1f-9ecd-88648ccf076d_1685087042.png" alt="">
<span style="font-size: 18px;"><strong>Output:</strong>
0 1 2,3,4,
<strong>Explanation</strong>:
</span><img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/701448/Web/Other/ab04eab6-d4f6-4625-802b-62cbf2ce5dda_1685087043.png" alt="">
<span style="font-size: 18px;">We can clearly see that there are 3 Strongly
Connected Components in the Graph</span> <span style="font-size: 18px;">as mentioned
in the Output.</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:</strong></span>
<img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/701448/Web/Other/8565c413-a0bd-4ff1-9cff-890cf2a0cd5d_1685087043.png" alt="">
<span style="font-size: 18px;"><strong>Output:</strong>
0 1 2,
<strong>Explanation</strong>:</span>
<span style="font-size: 18px;">All of the nodes are connected to each other.
So, there's only one SCC as shown.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><br><span style="font-size: 18px;"><strong>Your Task:</strong></span><br><span style="font-size: 18px;">You don't need to read input or print anything. Your task is to complete the function <strong>tarjans()</strong>&nbsp;which takes the number of vertices V&nbsp;and adjacency list of the graph as input parameters&nbsp;and returns a list of list of integers denoting the members of strongly connected components in the given graph.<br><strong>Note: </strong>A single strongly connected component must be represented in the form of a list if integers sorted in the ascending order.&nbsp;The resulting list should consist of a list of all SCCs&nbsp;which must be&nbsp;sorted in a way such that a lexicographically smaller list of integers appears first. </span></p>
<p><br><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(V + E).<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(V).</span></p>
<p><br><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 </span> <span style="font-size: 18px;">≤</span> <span style="font-size: 18px;"> V&nbsp;</span> <span style="font-size: 18px;">≤</span> <span style="font-size: 18px;"> 10<sup>5</sup><br>1 </span> <span style="font-size: 18px;">≤</span> <span style="font-size: 18px;"> E&nbsp;</span> <span style="font-size: 18px;">≤</span> <span style="font-size: 18px;"> 10<sup>5</sup><br>0 </span> <span style="font-size: 18px;">≤</span> <span style="font-size: 18px;"> u, v </span> <span style="font-size: 18px;">≤</span> <span style="font-size: 18px;"> N-1</span></p></div>