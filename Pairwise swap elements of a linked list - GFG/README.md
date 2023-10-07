# Pairwise swap elements of a linked list
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a singly linked list of size <strong>N</strong>. The task is to swap elements in the linked list pairwise.<br>For example, if the input list is 1 2 3 4, the resulting list after swaps will be 2 1 4 3.<br><strong>Note</strong>: You need to swap the nodes, not only the data. If only data is swapped then driver will print -1.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:
</strong>LinkedList: 1-&gt;2-&gt;2-&gt;4-&gt;5-&gt;6-&gt;7-&gt;8
<strong>Output: <br></strong>2&nbsp;1&nbsp;4&nbsp;2&nbsp;6&nbsp;5&nbsp;8&nbsp;7<strong>
Explanation: <br></strong>After swapping each pair considering (1,2), (2, 4), (5, 6).. so on as pairs, we get 2, 1, 4, 2, 6, 5, 8, 7 as a new linked list.</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:
</strong>LinkedList: 1-&gt;3-&gt;4-&gt;7-&gt;9-&gt;10-&gt;1
<strong>Output: <br></strong>3&nbsp;1&nbsp;7&nbsp;4&nbsp;10&nbsp;9&nbsp;1<strong>
Explanation: <br></strong>After swapping each pair considering (1,3), (4, 7), (9, 10).. so on as pairs, we get 3, 1, 7, 4, 10, 9, 1 as a new linked list.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>The task is to complete the function&nbsp;<strong>pairWiseSwap</strong>() which takes the head node as the only argument and returns the head of modified linked list.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N ≤&nbsp;10<sup>5</sup></span></p></div>