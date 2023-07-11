# Find kth element of spiral matrix
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a matrix with <strong>n</strong> rows and <strong>m </strong>columns. Your task is to find the <strong>kth</strong> element which is obtained while traversing the matrix spirally. You need to complete the method<strong> findK</strong>&nbsp;which takes four arguments the first argument is the matrix <strong>A </strong>and the next two arguments will be <strong>n </strong>and <strong>m </strong>denoting the size of the matrix A and then the forth argument is an integer <strong>k</strong>. The function will return the kth element obtained while traversing the matrix spirally.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1</strong></span><span style="font-size: 18px;"><strong>:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:
</strong>n = 4, m = 4, k = 10
A[][] = {{1  2  3  4},
&nbsp;        {5  6  7  8},
&nbsp;        {9  10 11 12},<br>         {13 14 15 16}}
<strong>Output:
</strong>13<strong>
Explanation:<br></strong><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700274/Web/Other/blobid0_1687070632.png" alt="">
The spiral order of matrix will look like 1-&gt;2-&gt;3-&gt;4-&gt;8-&gt;12-&gt;16-&gt;15-&gt;14-&gt;13-&gt;9-&gt;5-&gt;6-&gt;7-&gt;11-&gt;10. So the 10th element in this order is 13. </span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Example 2</strong></span><span style="font-size: 18px;"><strong>:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:
</strong>n = 3, m = 3, k = 4
A[][] = {{1 2 3},
&nbsp;        {4 5 6},
&nbsp;        {7 8 9}}
<strong>Output:
</strong>6<strong>
Explanation:</strong>
The spiral order of matrix will look like 1-&gt;2-&gt;3-&gt;6-&gt;9-&gt;8-&gt;7-&gt;4-&gt;5. So the 4th element in this order is 6.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You only need to implement the given function&nbsp;<strong>findK()</strong>. Do not read input, instead use the arguments given in the function. Return the K'th element obtained by traversing matrix spirally.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n*m)<br><strong>Expected Auxiliary Space:</strong> O(n*m)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1&lt;=n,m&lt;=10<sup>3</sup><br>1&lt;=k&lt;=n*m</span></p></div>