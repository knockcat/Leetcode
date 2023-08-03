# Shortest path in Directed Acyclic Graph
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a Directed Acyclic Graph of N vertices from 0 to N-1 and a 2D Integer array(or vector) edges[ ][ ] of length M, where there is a directed edge from edge[i][0] to edge[i][1] with a distance of edge[i][2] for all i.</span></p>
<p><span style="font-size: 18px;">Find the <strong>shortest</strong> path from <strong>src(0) </strong>vertex&nbsp;to all the vertices&nbsp;and if it is impossible to reach any vertex, then return&nbsp;<strong>-1</strong> for that vertex.</span></p>
<p><strong><span style="font-size: 18px;">Example1:</span></strong></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:</strong>
N = 4, M = 2
edge = [[0,1,2],[0,2,1]
<strong>Output:</strong>
0 2 1 -1<br></span><strong><span style="font-size: 18px;">Explanation:<br></span></strong><span style="font-size: 18px;">Shortest path from 0 to 1 is 0-&gt;1 with edge weight 2.</span><span style="font-size: 18px;">&nbsp;<br>Shortest path from 0 to 2 is 0-&gt;2 with edge weight 1.<br>There is no way we can reach 3, so it's -1 for 3.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><strong><span style="font-size: 18px;">Example2:</span></strong></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:</strong>
N = 6, M = 7
edge = [[0,1,2],[0,4,1],[4,5,4],[4,2,2],[1,2,3],[2,3,6],[5,3,1]]
<strong>Output:</strong>
0 2 3 6 1 5<br></span><strong><span style="font-size: 18px;">Explanation:<br></span></strong><span style="font-size: 18px;">Shortest path from 0 to 1 is 0-&gt;1 with edge weight 2.</span><span style="font-size: 18px;"> <br>Shortest path from 0 to 2 is 0-&gt;4-&gt;2 with edge weight 1+2=3.<br>Shortest path from 0 to 3 is 0-&gt;4-&gt;5-&gt;3 with edge weight 1+4+1=6.<br>Shortest path from 0 to 4 is 0-&gt;4 with edge weight 1.<br>Shortest path from 0 to 5 is 0-&gt;4-&gt;5 with edge weight 1+4=5.<br></span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong></span></p>
<p><span style="font-size: 18px;">You don't need to print or input anything. Complete the function <strong>shortest path()</strong>&nbsp;which takes an integer N as number of vertices, an integer M as number of edges and a&nbsp;2D Integer array(or vector)&nbsp;edges as the input parameters and returns an <strong>integer array(or vector)</strong>, denoting&nbsp;the list&nbsp;of distance from src to all nodes.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(N+M), where N is the number of nodes and M is edges<br><strong>Expected Space Complexity:&nbsp;</strong>O(N)</span></p>
<p><span style="font-size: 18px;"><strong>Constraint:<br></strong></span><span style="font-size: 18px;">1 &lt;= N,M &lt;= 100<br></span><span style="font-size: 18px;">0 &lt;= edge<sub>i,0</sub>,edge<sub>i,1</sub>&nbsp;&lt;&nbsp;n<br>0 &lt;=&nbsp;</span><span style="font-size: 18px;">edge</span><sub>i,2</sub><span style="font-size: 18px;">&nbsp;&lt;=10<sup>5</sup></span></p>
<p>&nbsp;</p></div>