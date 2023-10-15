# Normal BST to Balanced BST
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given a Binary Search Tree, modify the given BST such that it is balanced and has minimum possible height. Return the balanced BST.</span></p>
<p><span style="font-size: 14pt;"><strong>Example1:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 14pt;"><strong>Input:</strong>
       30
      /
     20
    /
   10<br></span><span style="font-size: 14pt;"><strong>Output:</strong>
     20
   /   \
 10     30
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 14pt;"><strong>Example2:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 14pt;"><strong>Input:</strong>
         4
        /
       3
      /
     2
    /
   1
<strong>Output:</strong>
      3            3           2
    /  \         /  \        /  \
   1    4   OR  2    4  OR  1    3   
    \          /                  \ <br>     2        1                    4</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 14pt;"><strong><br>Your Task:</strong><br>The task is to complete the function <strong>buildBalancedTree()</strong> which takes root as the input argument and returns the root of tree after converting the given BST&nbsp;into a balanced BST with minimum possible height. The driver code will print the height of the updated tree in output itself. </span><br><span style="font-size: 14pt;">&nbsp;</span><br><span style="font-size: 14pt;"><strong>Expected Time Complexity:&nbsp;</strong>O(N)<br><strong>Expected Auxiliary Space: </strong>O(N)<br>Here N denotes total number of nodes in given BST.</span></p>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 &lt;= N &lt;= 10<sup>5</sup><br>1 &lt;= Node data &lt;= 10<sup>9</sup></span></p></div>