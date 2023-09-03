# Check if Tree is Isomorphic
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given two&nbsp;Binary Trees. Check whether they are&nbsp;Isomorphic or not.</span></p>
<p><span style="font-size: 18px;"><strong>Note:&nbsp;</strong><br>Two trees are called isomorphic if one can be obtained from another by a series of flips, i.e. by swapping left and right children of several nodes.&nbsp;Any number of nodes at any level can have their children swapped. Two empty trees are isomorphic.<br>For example, the following two trees are isomorphic with the following sub-trees flipped: 2 and 3, NULL and 6, 7 and 8.<br><a href="https://media.geeksforgeeks.org/wp-content/cdn-uploads/ISomorphicTrees-e1368593305854.png"><img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/ISomorphicTrees-e1368593305854.png" alt="ISomorphicTrees"></a></span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
 T1    </strong>1     <strong>T2:</strong>   1
&nbsp;    /   \        /  \
&nbsp;   2     3      3    2
&nbsp;  /            /
&nbsp; 4<strong>&nbsp;           </strong>4<strong>
Output: </strong>No
</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
T1    </strong>1     <strong>T2:</strong>    1
&nbsp;   /  \         /   \
&nbsp;  2    3       3     2
&nbsp; /                    \
&nbsp; 4<strong>&nbsp;                    </strong>4<strong>
Output: </strong>Yes
</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function<strong> isomorphic() </strong>that takes<strong>&nbsp;</strong>the root&nbsp;nodes of both the Binary Trees as its input&nbsp;and returns True if the two trees are isomorphic. Else, it returns False. (The driver code will print Yes if the returned values are true, otherwise false.)</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(min(M, N)) where M and N are the sizes of the two trees.<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(min(H1, H2)) where H1 and H2 are the heights of the two trees.</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1&lt;=Number of nodes&lt;=10<sup>5</sup></span></p></div>