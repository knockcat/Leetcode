# Find Common Nodes in two BSTs
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given two Binary Search Trees. Find&nbsp;the&nbsp;nodes that are common in both of them, ie-&nbsp;find the intersection of the two BSTs.</span></p>
<p><span style="font-size: 18px;"><strong>Note</strong>: Return&nbsp;</span><span style="font-size: 18px;">the common nodes in <strong>sorted </strong>order.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong></span><strong><span style="font-size: 18px;">BST1:
</span></strong> <span style="font-size: 18px;">&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;&nbsp; &nbsp; &nbsp;5
 &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;/ &nbsp; &nbsp; \
 &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;1 &nbsp; &nbsp; &nbsp;  10
 &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;/ &nbsp; \ &nbsp; &nbsp;  /
 &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; 0 &nbsp; &nbsp; 4&nbsp;&nbsp;&nbsp; 7
 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  \
 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;9
</span><strong><span style="font-size: 18px;">BST2:
</span></strong> <span style="font-size: 18px;">&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; 10 
&nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  / &nbsp; &nbsp;\
 &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;7&nbsp; &nbsp; &nbsp;20
 &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;/ &nbsp; \ 
&nbsp;&nbsp; &nbsp; &nbsp; &nbsp;  4&nbsp; &nbsp; &nbsp;9
<strong>Output: </strong>4 7 9 10

</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
BST1:
</strong>&nbsp;    10
&nbsp;   /  \
&nbsp;  2   11
&nbsp; /  \
&nbsp;1   3
<strong>BST2:
</strong>&nbsp;      2
&nbsp;    /  \
&nbsp;   1    3
<strong>Output: </strong>1 2 3
</span></pre>
<p><strong><span style="font-size: 18px;">Your Task:</span></strong><br><span style="font-size: 18px;">You don't need to read input or print anything. Your task is to complete the function</span><span style="font-size: 18px;"><strong>&nbsp;findCommon()</strong> that takes roots of the two&nbsp;BSTs as input parameters and returns a list of integers&nbsp;containing the common nodes in&nbsp;sorted order.&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(N1 + N2) where N1 and N2 are the sizes of the 2 BSTs.<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(H1 + H2) where H1 and H2 are the heights of the 2 BSTs.</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= Number of Nodes &lt;= 10<sup>5</sup><br>1 &lt;= Node data &lt;= 10<sup>9</sup></span></p></div>