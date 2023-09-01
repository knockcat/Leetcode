# Leftmost and rightmost nodes of binary tree
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a Binary Tree of size N, Print the corner nodes ie- the node at the leftmost and rightmost of each level.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input :</strong>
         1
       /  \
     2      3
    / \    / \
   4   5  6   7    </span>
<span style="font-size: 18px;"><strong>Output:</strong> 1 2 3 4 7</span>
<span style="font-size: 18px;"><strong>Explanation:</strong>
Corners at level 0: 1
Corners at level 1: 2 3
Corners at level 2: 4 7</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:</strong></span>

<span style="font-size: 18px;">        10
      /    \
     20     30
    / \  
   40  60</span>
<span style="font-size: 18px;"><strong>Output: </strong>10 20 30 40 60</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Your Task: &nbsp;</strong><br>You dont need to read input. Complete the function <strong>printCorner() </strong>which takes root node as input parameter and prints the corner nodes separated by spaces. The left corner should be printed before the right for each level starting from level 0.<br><strong>Note: </strong>Don't print a new line after printing all the corner nodes.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(N)<br><strong>Expected Auxiliary Space:</strong> O(number of nodes in a level)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N ≤ 10^5</span></p></div>