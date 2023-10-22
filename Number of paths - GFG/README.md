# Number of paths
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">The problem is to count all the possible paths from top left to bottom right of an <strong>MxN</strong>&nbsp;matrix with the constraints that from each cell you can either move to <strong>right</strong> or <strong>down</strong>.</span></p>
<p><span style="font-size: 18px;">Return answer modulo 10<sup>9</sup>+7.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input</strong>:
M = 3 and N = 3
<strong>Output:</strong>&nbsp;6
<strong>Explanation</strong>:
Let the given input 3*3 matrix is filled 
as such:
A B C
D E F
G H I
The possible paths which exists to reach 
'I' from 'A' following above conditions 
are as follows:ABCFI, ABEHI, ADGHI, ADEFI, 
ADEHI, ABEFI
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input</strong>:
M = 1 and N = 4
<strong>Output:</strong> 1
<strong>Explanation</strong>:
There is only one direction to go in,<br>and thus, there is only one path possible.<br></span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong style="font-size: 18px;">Your Task</strong><br><span style="font-size: 18px;">You don't need to read input or print anything. Your task is to complete the function <strong>numberOfPaths() </strong>which takes the integer <strong>M </strong>and integer <strong>N </strong>as input parameters and returns an integer, the number of paths.</span></span></p>
<p><span style="font-size: 18px;"><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(M)<br></span><strong style="font-size: 18px;">Expected Space Complexity:</strong><span style="font-size: 18px;">&nbsp;O(1)</span><span style="font-size: 18px;"><br></span></span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong></span><br><span style="font-size: 18px;">1 ≤ N ≤ 10<sup>8</sup><br>1 ≤ M ≤ 10<sup>5</sup><br></span></p></div>