# Elimination-of-Left-Recursion
Aim -

To implement a program for Elimination of Left Recursion.

Algorithm –

Step 1 – Initialize the arrays for taking input from the user.
Step 2 – Prompt the user to input the no. of non-terminals having left recursion and no. of productions for these non-terminals.
Step 3 – Prompt the user to input the production for non-terminals.
Step 4 – Eliminate left recursion using the following rules:-
A-&gt;Aα1| Aα2 | . . . . . |Aαm
A-&gt;β1| β2| . . . . .| βn
Then replace it by
A-&gt; βi A’ i=1,2,3,…..m
A’-&gt; αj A’ j=1,2,3,…..n
A’-&gt; Ɛ
Step 5 – After eliminating the left recursion by applying these rules, display the productions
without left recursion.

