# Leaf under budget
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a binary tree&nbsp;and a <strong>budget</strong>.&nbsp;Assume&nbsp;you are at the root of the tree<strong>(level 1)</strong>, you need to maximise the count of&nbsp;leaf nodes you can visit in your budget if the <strong>cost of visiting </strong>a leaf node is equal to the <strong>level of that leaf node</strong>. </span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input: </strong></span>
<span style="font-size: 18px;">                  10
                /    \
               8      2
             /      /   \
            3      3     6
                    \
                     4
and budget = 8</span>
<span style="font-size: 18px;"><strong>Output: 2</strong></span>
<span style="font-size: 18px;"><strong>Explanation:</strong></span>
<span style="font-size: 18px;">Cost For visiting Leaf Node 3: 3
Cost For visiting Leaf Node 4: 4
Cost For visiting Leaf Node 6: 3
In budget 8 one can visit Max 2 Leaf Nodes.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input: </strong></span>
         <span style="font-size: 18px;">1
&nbsp;      /   \
&nbsp;     2     3
&nbsp;    / \   / \
&nbsp;   4   5 6   7
and budget = 5</span>
<span style="font-size: 18px;"><strong>Output: </strong>1<br><strong>Explanation:</strong> We can only visit either node 4 or 5.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><strong><span style="font-size: 18px;">Your Task:</span></strong></p>
<p><span style="font-size: 18px;">You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>getCount()&nbsp;</strong>which takes root node of the tree and a integer denoting the budget as input parameters and returns an integer denoting the count of visited leaf nodes of the tree.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1&lt;=N&lt;=10<sup>5</sup><br>1&lt;=budget&lt;=10<sup>4</sup></span></p></div>