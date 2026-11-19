/*
Time complexity
Not the actual time taken but amount of time taken as function of input size(n).
amount of time taken  = operations , when the value input(n) increasse and decrease how it effects/changes the number operations is called time complexity
big O notation
time complexity symbol:
it tell us worst case scenario / complexity we called it upper bound.
O(n), this will be the worst case of the time complexity , it means the operation can't be worst then this

Talha whenever we take function of time complexity the function can be not straight forward always like f(n)= n;---//when y = x;
it can be complex like this
f(x)--//y = 4x^2 + 3x + 5;
Talha if we have this kind of function to find  time complexity from it we have to ignore the constans (any mathematical number) and make them 1 so the above function will be :
1. x^2 + x + 1
and talha the second is to consider only the largest term.
2. x^2
Talha x = n (input size);
(the reason of getting n^2 as largest  because this is what will be more effective when n's power changes)
so Talha here the final time complexity will be O(n^2);
lets say we have another equation.
f(n) = 100 + 5n^4 +_/n;
step_1: 1 + n^4 +_/n;
step_2:  n^4
so time complexity: O(n^4)
_____________________________
Talha like the bigO notaiton we have another notations like worst case time complexity = big)
*/