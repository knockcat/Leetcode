# Lowest Common Ancestor in a BST
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a Binary Search Tree (with all values unique) and two node values n1 and n2 (n1!=n2). Find the Lowest Common Ancestors of the two nodes in the BST.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:
</strong>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; 5
 &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; /&nbsp;  \
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; 4&nbsp; &nbsp; &nbsp; 6
 &nbsp; &nbsp;     /&nbsp;  &nbsp;&nbsp; &nbsp; \
 &nbsp;     &nbsp;3    &nbsp; &nbsp; &nbsp;&nbsp;7
 &nbsp;&nbsp; &nbsp;  &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  \
&nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  &nbsp;&nbsp;&nbsp;8
n1 = 7, n2 = 8
<strong>Output: </strong>7
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:
</strong>     2
&nbsp;  /   \
&nbsp; 1     3
n1 = 1, n2 = 3
<strong>Output: </strong>2
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>LCA()</strong>&nbsp;which takes the root Node of the BST and two integer values n1 and n2 as inputs and returns the Lowest Common Ancestor of the Nodes with values n1 and n2 in the given BST.&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(Height of the BST).<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(Height of the BST).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= N &lt;= 10<sup>4</sup></span></p></div>