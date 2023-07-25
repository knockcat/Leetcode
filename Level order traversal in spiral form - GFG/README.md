# Level order traversal in spiral form
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a binary tree and the task is to find the spiral order traversal of the tree.</span></p>
<p><span style="font-size: 18px;"><strong>Spiral order Traversal mean:</strong> Starting from level 0 for root node, for all the even levels we print the node's value from right to left and for all the odd levels we print the node's value from left to right.</span><span style="font-size: 18px;">&nbsp;</span></p>
<p><span style="font-size: 18px;">For below tree, function should return 1, 2, 3, 4, 5, 6, 7.<br><br><br><strong>&nbsp;<img style="height: 290px; width: 539px;" src="https://contribute.geeksforgeeks.org/wp-content/uploads/level.jpg" alt=""></strong></span><br>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:
</strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1
 &nbsp;&nbsp; /&nbsp;&nbsp; \
 &nbsp;&nbsp;3&nbsp;&nbsp;&nbsp;&nbsp; 2
<strong>Output:</strong>1 3 2
</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:
</strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 10
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp;&nbsp; \
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 20&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;30
 &nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp; \
 &nbsp;&nbsp; 40&nbsp;&nbsp;&nbsp;&nbsp; 60
<strong>Output: </strong>10 20 30 60 40&nbsp;
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>The task is to complete the function <strong>findSpiral</strong>()&nbsp;which takes&nbsp;<strong>root&nbsp;</strong>node as input parameter&nbsp;and returns&nbsp;the elements in spiral form of level order traversal as a list. The newline is automatically appended by the driver code.<br><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= Number of nodes &lt;= 10<sup>5</sup><br>0 &lt;= Data of a node &lt;= 10<sup>5</sup></span></p></div>