# Eventual Safe States
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">A directed graph of <strong>V</strong> vertices and <strong>E</strong> edges is given in the form of an adjacency list <strong>adj</strong>. Each node of the graph is labelled with a distinct integer in the range <strong>0</strong> to <strong>V - 1</strong>.</span></p>

<p><span style="font-size:18px">A node is a <strong>terminal node</strong> if there are no outgoing edges. A node is a <strong>safe node</strong> if every possible path starting from that node leads to a <strong>terminal node</strong>.</span></p>

<p><span style="font-size:18px">You have to return an array containing all the <strong>safe nodes</strong> of the graph. The answer should be sorted in <strong>ascending</strong> order.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:</span></strong>

<img alt="" src="https://media.geeksforgeeks.org/img-practice/booker1-1655493978.png" style="height:348px; width:386px">
<span style="font-size:18px"><strong>Output:</strong></span>
<span style="font-size:18px">2 4 5 6</span>
<span style="font-size:18px"><strong>Explanation:</strong></span>
<span style="font-size:18px">The given graph is shown above.</span>
<span style="font-size:18px">Nodes 5 and 6 are terminal nodes as there are no 
outgoing edges from either of them. </span>
<span style="font-size:18px">Every path starting at nodes 2, 4, 5, and 6 all 
lead to either node 5 or 6.</span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:</span></strong>

<strong><span style="font-size:18px"><img alt="" src="https://media.geeksforgeeks.org/img-practice/booker2-1655494315.png"></span></strong>
<strong><span style="font-size:18px">Output:</span></strong>
<span style="font-size:18px">3</span>
<strong><span style="font-size:18px">Explanation:</span></strong>
<span style="font-size:18px">Only node 3 is a terminal node, and every path 
starting at node 3 leads to node 3.</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>eventualSafeNodes</strong><strong>()&nbsp;</strong>which takes an integer&nbsp;<strong>V</strong> denoting no. of vertices and <strong>adj</strong> denoting adjacency list of the graph and returns an array of <strong>safe nodes</strong>.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(V + E)</span></p>

<p><span style="font-size:18px"><strong>Expected Space Complexity:</strong> O(V)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span></p>

<ul>
	<li><span style="font-size:18px">1 &lt;= V &lt;= 10<sup>4</sup></span></li>
	<li><span style="font-size:18px">0 &lt;= E &lt;= 10<sup>4</sup></span></li>
	<li><span style="font-size:18px">The graph won't contain self loops.</span></li>
	<li><span style="font-size:18px">Each node in the graph has a distinct value in the range 0 to V - 1.</span></li>
</ul>
</div>