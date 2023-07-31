# BFS of graph
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a directed&nbsp;graph. The task is to do Breadth First Traversal of this graph starting from 0.<br><strong>Note: </strong>One can move from node u to node v only if there's an edge from u to v. Find the BFS traversal of the graph starting from the 0th vertex,</span><span style="font-size: 18px;"> from left to right according to the input graph. Also, you should only take nodes directly or indirectly connected from Node 0 in consideration.</span></p>
<p><br><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:</strong>
</span><img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/700217/Web/Other/e0eb5630-5d6c-493a-9b1e-d16d40f10b01_1685086421.png" alt=""><span style="font-size: 18px;">
<strong>Output:</strong> 0 1 2 3 4
<strong>Explanation</strong>: 
0 is connected to 1 , 2 , 3.
2 is connected to 4.
so starting from 0, it will go to 1 then 2
then 3. After this 2 to 4, thus bfs will be
0 1 2 3 4.</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:</strong>
</span><img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/700217/Web/Other/001e9e35-da68-4024-b1d3-e34944188a1e_1685086422.png" alt=""><span style="font-size: 18px;">
<strong>Output:</strong> 0 1 2
<strong>Explanation</strong>:
0 is connected to 1 , 2.
so starting from 0, it will go to 1 then 2,
thus bfs will be 0 1 2. </span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><br><span style="font-size: 18px;"><strong>Your task:</strong><br>You dont need to read input or print anything. Your task is to complete the function&nbsp;<strong>bfsOfGraph()</strong>&nbsp;which takes the integer V denoting the number of vertices and adjacency list as input parameters and returns </span>&nbsp;<span style="font-size: 18px;">a list containing the BFS traversal of the graph starting from the 0th vertex from left to right.</span></p>
<p><br><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(V + E)<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(V)</span></p>
<p><br><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ V, E ≤ 10<sup>4</sup></span></p></div>