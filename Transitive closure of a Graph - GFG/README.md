# Transitive closure of a Graph
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a directed graph, determine whether a vertex <strong>j</strong> is reachable from another vertex <strong>i</strong>&nbsp;for all vertex pairs <strong>(i, j)</strong> in the given <strong>graph</strong>. Here,&nbsp;</span><span style="font-size: 18px;">vertex&nbsp;</span><strong style="font-size: 18px;">j</strong><span style="font-size: 18px;">&nbsp;is reachable from another vertex&nbsp;</span><strong style="font-size: 18px;">i </strong><span style="font-size: 18px;">means that there is a path from vertex </span><strong style="font-size: 18px;">i </strong><span style="font-size: 18px;">to </span><strong style="font-size: 18px;">j.</strong><span style="font-size: 18px;">&nbsp;The reachability matrix is called the </span><strong style="font-size: 18px;">transitive closure of a graph</strong><span style="font-size: 18px;">. The directed graph is represented by an </span><strong style="font-size: 18px;">adjacency matrix </strong><span style="font-size: 18px;">where there are </span><strong style="font-size: 18px;">N</strong><span style="font-size: 18px;"> vertices.&nbsp;</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:</strong> N = 4
graph = {{1, 1, 0, 1}, 
&nbsp;        {0, 1, 1, 0}, 
&nbsp;        {0, 0, 1, 1}, 
&nbsp;        {0, 0, 0, 1}}
<strong>Output:</strong> {{1, 1, 1, 1}, 
&nbsp;        {0, 1, 1, 1}, 
&nbsp;        {0, 0, 1, 1}, 
&nbsp;        {0, 0, 0, 1}}
<strong>Explanation: <br></strong></span><span style="font-size: 18px;">The output list shows the reachable indexes.<br></span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p style="font-family: sans-serif; font-size: medium; white-space: normal;"><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre style="position: relative;"><span style="font-size: 14pt;"><strong>Input:</strong> N = 3
graph = {{1, 0, 0}, 
&nbsp;        {0, 1, 0}, 
&nbsp;        {0, 0, 1}}
<strong>Output:</strong> {{1, 0, 0}, 
&nbsp;        {0, 1, 0}, 
&nbsp;        {0, 0, 1}}
<strong>Explanation: <br></strong>The output list shows the reachable indexes.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You do not need to read input or print anything. Your task is to complete the function <strong>transitiveClosure()</strong> which takes an integer <strong>N</strong> and a 2D array <strong>graph</strong>(adjacency matrix of the graph)<strong>&nbsp;</strong>as <strong>input parameters </strong>and returns the <strong>transitive closure </strong>of the graph in the form of <strong>2D array</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(N<sup>3</sup>)<br><strong>Expected Auxiliary Space:</strong> O(N<sup>2</sup>)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N ≤ 100&nbsp;&nbsp;</span></p></div>