# Right View of Binary Tree
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a Binary Tree, find&nbsp;<strong>Right view</strong> of it. Right view of a Binary Tree is set of nodes visible when tree is viewed from <strong>right </strong>side.</span></p>

<p><span style="font-size:18px">Right view of following tree is 1 3 7 8.</span></p>

<p><span style="font-size:18px">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 1<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp;&nbsp; \<br>
&nbsp;&nbsp;&nbsp;&nbsp; 2&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 3<br>
&nbsp;&nbsp; /&nbsp;&nbsp; \&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp; \<br>
&nbsp; 4&nbsp;&nbsp;&nbsp;&nbsp; 5&nbsp;&nbsp; 6&nbsp;&nbsp;&nbsp; 7<br>
&nbsp;&nbsp;&nbsp; \<br>
&nbsp;&nbsp;&nbsp;&nbsp; 8</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre style="position: relative;"><span style="font-size:18px"><strong>Input:
</strong>&nbsp; &nbsp; &nbsp; &nbsp;1
 &nbsp; &nbsp;/&nbsp;&nbsp;&nbsp; \
 &nbsp;&nbsp;3 &nbsp;&nbsp;&nbsp;&nbsp; 2
<strong>Output: </strong>1 2
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre style="position: relative;"><span style="font-size:18px"><strong>Input:
</strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;10
 &nbsp;&nbsp;&nbsp;/&nbsp;&nbsp;&nbsp;\
 &nbsp;20&nbsp; &nbsp;&nbsp; 30
 /&nbsp;&nbsp; \
40&nbsp; 60 
<strong>Output: </strong>10 30 60
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">Just complete the <strong>function rightView()&nbsp;</strong>that takes <strong>node </strong>as <strong>parameter </strong>and returns&nbsp;the right view as a list.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(Height of the Tree).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">1 ≤ Number of nodes ≤ 10<sup>5</sup></span><br>
<span style="font-size:18px">0 ≤ Data of a node ≤ 10<sup>5</sup></span></p>
</div>