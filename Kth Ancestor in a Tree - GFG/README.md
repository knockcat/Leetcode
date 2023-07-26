# Kth Ancestor in a Tree
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a binary tree of size&nbsp; <strong>N</strong>,&nbsp;a <strong>node,</strong> and a positive integer <strong>k</strong>., Your task is to complete the function <strong>kthAncestor()</strong>, the function should return the <strong>kth</strong> ancestor of the given node in the binary tree. If there does not exist any such ancestor then return&nbsp;-1.<br><strong>Note</strong>: It is guaranteed that the <strong>node</strong> exists in the tree.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;">
<img style="height: 230px; width: 287px;" src="https://contribute.geeksforgeeks.org/wp-content/uploads/reverse.jpg" alt="">
<strong>Input:</strong>
K = 2 Node = 4
<strong>Output:</strong> 1
<strong>Explanation:</strong>
Since, K is 2 and node is 4, so we
first need to locate the node and
look k times its ancestors.
Here in this Case node 4 has 1 as his
2nd Ancestor aka the Root of the tree.</span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
k=1 </span>
<span style="font-size: 18px;">node=3
      1
    /   \</span>
    <span style="font-size: 18px;">2     3</span>

<span style="font-size: 18px;"><strong>Output:</strong>
1
<strong>Explanation:
</strong>K=1 and node=3 ,Kth ancestor of node 3 is 1.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You are asked to complete the function <strong>kthAncestor()</strong> which accepts <strong>root</strong> of the tree, <strong>k</strong> and <strong>node</strong> as input parameters, and returns the <strong>kth ancestor </strong>of Node which contains node as its value.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1&lt;=N&lt;=10<sup>5</sup><sup><br></sup></span><span style="font-size: 18px;">1&lt;= K &lt;= 100<br>1 &lt;= Node.data &lt;= N</span></p></div>