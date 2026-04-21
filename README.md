# Algorithm - Bubble Sort (C++)

This program implements the Bubble Sort algorithm in C++ to sort a list of elements in ascending order.

It helps in understanding how comparison-based sorting works by repeatedly swapping adjacent elements until the entire array becomes sorted.

## Aim

To implement Bubble Sort in C++ and arrange elements in sorted order.

## Theory

Bubble Sort is a simple sorting algorithm that repeatedly compares adjacent elements and swaps them if they are in the wrong order.

In each pass:

The largest unsorted element moves to its correct position at the end of the array.

This process continues until no more swaps are needed.

Working of Bubble Sort:

Compare the first two elements.

If the first is greater than the second, swap them.

Move to the next pair and repeat.

After one complete pass, the largest element reaches the last position.

Repeat the process for the remaining unsorted elements.

This process continues until the array is completely sorted.

## Time Complexity

Best Case:

O(n)

(When the array is already sorted and optimized Bubble Sort is used)

Average Case:

O(n²)

Worst Case:

O(n²)

(When the array is in reverse order)

## Space Complexity

O(1)

Bubble Sort uses constant extra memory since sorting is done in place.

## What the Code Does

Takes array elements as input from the user.

Uses nested loops to compare adjacent elements.

Swaps elements when they are in the wrong order.

Repeats the process until the array becomes sorted.

Displays the sorted array as output.

## Conclusion

Bubble Sort correctly sorts elements by repeatedly swapping adjacent values.

It is easy to understand and implement, making it useful for learning sorting concepts.

However, it is inefficient for large datasets because of its quadratic time complexity.

Overall, this program is a good introductory example for understanding sorting algorithms in C++.

# Algorithm - Tower of Hanoi (C++)

This program implements the Tower of Hanoi problem using recursion in C++.

It helps in understanding recursion, divide-and-conquer strategy, and how a large problem can be broken into smaller subproblems.

## Aim

To implement the Tower of Hanoi algorithm using recursion and display all steps required to move disks from source rod to destination rod.

## Theory

Tower of Hanoi is a classic recursive problem involving three rods:

Source Rod

Destination Rod

Auxiliary Rod

The objective is to move all disks from source to destination following these rules:

Only one disk can be moved at a time.

Only the top disk can be moved.

A larger disk cannot be placed on a smaller disk.

Recursive Working:

To move n disks from Source to Destination:

Move n-1 disks from Source to Auxiliary.

Move the largest disk from Source to Destination.

Move n-1 disks from Auxiliary to Destination.

Base Case:

If only one disk remains, move it directly from source to destination.

This recursive process continues until all disks are transferred.

## Time Complexity

O(2^n)

The number of moves required is:

2^n - 1

which grows exponentially.

## Space Complexity

O(n)

Space is used by the recursive call stack.

## What the Code Does

Takes the number of disks as input from the user.

Uses a recursive function to solve the problem.

Prints each move step by step.

Shows how every disk moves from source rod to destination rod using the auxiliary rod.

Displays the complete sequence of required moves.

## Conclusion

The Tower of Hanoi program correctly solves the problem using recursion.

It demonstrates how recursion breaks a complex problem into smaller subproblems.

This program is useful for understanding:

Recursive functions

Divide and conquer approach

Call stack behavior

Although elegant, the solution becomes slow for large values of n because the number of moves increases exponentially.

# Algorithm - Horner’s Method (C++)

This program implements Horner’s Method in C++ to evaluate a polynomial efficiently.

It helps in understanding how polynomial calculations can be optimized by reducing the number of multiplications and additions.

## Aim

To implement Horner’s Method in C++ for efficient evaluation of polynomial expressions.

## Theory

Horner’s Method is an efficient algorithm used to evaluate a polynomial of the form:

P(x) = anx^n + an-1x^(n-1) + ... + a1x + a0

Instead of calculating each power of x separately, Horner’s Method rewrites the polynomial as:

P(x) = (...((anx + an-1)x + an-2)x ... + a1)x + a0

This reduces repeated calculations.

Working:

Start with the highest degree coefficient.

Multiply it by x.

Add the next coefficient.

Repeat the process until all coefficients are used.

This method reduces the number of operations and improves efficiency.

## Time Complexity

O(n)

The polynomial is evaluated in one pass through the coefficients.

## Space Complexity

O(1)

Only constant extra space is required.

## What the Code Does

Takes polynomial coefficients as input from the user.

Takes the value of x at which the polynomial is to be evaluated.

Uses Horner’s Method to compute the result efficiently.

Performs repeated multiplication and addition in optimized form.

Displays the final polynomial value as output.

## Conclusion

Horner’s Method correctly evaluates polynomial expressions in an efficient way.

It reduces computational cost compared to direct polynomial evaluation.

This program demonstrates optimization in algorithm design and shows how mathematical expressions can be computed more efficiently using a better approach.

# Algorithm - Linear Search (C++)

This program implements the Linear Search algorithm in C++ to search for an element in a list.

It helps in understanding how searching works by checking elements one by one until the desired element is found.

## Aim

To implement Linear Search in C++ to find the position of a given element.

## Theory

Linear Search is a simple searching algorithm in which each element of the array is checked sequentially until the required element is found.

Working:

Start searching from the first element.

Compare the target value with each element one by one.

If a match is found, return its position.

If all elements are checked and no match is found, the element is not present.

This method does not require the array to be sorted.

## Time Complexity

Best Case:

O(1)

(Element found at the first position)

Average Case:

O(n)

Worst Case:

O(n)

(Element found at the last position or not found)

## Space Complexity

O(1)

Only constant extra memory is used.

## What the Code Does

Takes array elements as input from the user.

Takes the element to be searched.

Checks each element one by one using Linear Search.

If the element is found, displays its position.

If the element is not found, displays an appropriate message.

## Conclusion

Linear Search correctly finds an element by sequentially checking all elements.

It is easy to implement and works well for small or unsorted datasets.

However, it becomes inefficient for large datasets due to its linear time complexity.

Overall, this program is a basic and important example for understanding searching algorithms in C++.

# Algorithm - Missing Number (C++)

This program implements an algorithm in C++ to find the missing number from a sequence of integers.

It helps in understanding problem solving techniques and how mathematical formulas or array traversal can be used to efficiently detect a missing element.

## Aim

To implement a C++ program to find the missing number in a given sequence.

## Theory

In this problem, an array contains numbers from 1 to n, but one number is missing.

The objective is to identify the missing number.

Method Used:

### Sum Formula Method

The sum of first n natural numbers is:

n(n+1)/2

Working:

Calculate the expected sum of numbers from 1 to n.

Calculate the actual sum of elements present in the array.

Subtract the actual sum from the expected sum.

The difference gives the missing number.

Missing Number = Expected Sum - Actual Sum

This method is efficient and simple.

Another possible approach is checking elements one by one, but the sum method is faster.

## Time Complexity

O(n)

The array is traversed once to calculate the actual sum.

## Space Complexity

O(1)

Only constant extra memory is used.

## What the Code Does

Takes array elements as input from the user.

Assumes one number is missing in the sequence.

Computes the expected sum using the mathematical formula.

Computes the actual sum of array elements.

Finds and displays the missing number.

## Conclusion

This program correctly identifies the missing number in a sequence.

It demonstrates how mathematical optimization can simplify problem solving.

Compared to checking each number individually, this approach is faster and more efficient.

Overall, this program is a good example of applying algorithmic thinking to solve array-based problems in C++.

# Algorithm - Permutation (C++)

This program implements an algorithm in C++ to generate all possible permutations of a given set of elements.

It helps in understanding recursion, backtracking, and how different arrangements of elements can be generated systematically.

## Aim

To implement a C++ program to generate all permutations of a given set of elements.

## Theory

Permutation means arranging elements in all possible orders.

For example:

For elements:

A B C

Possible permutations are:

ABC

ACB

BAC

BCA

CAB

CBA

Total permutations:

n!

where n is the number of elements.

Recursive Approach:

Fix one element at a position.

Swap it with remaining elements.

Recursively generate permutations for the remaining positions.

Backtrack and restore the original arrangement.

Repeat until all possible arrangements are generated.

Base Case:

When all positions are fixed, print one complete permutation.

This approach uses recursion and backtracking.

## Time Complexity

O(n!)

All possible permutations are generated.

## Space Complexity

O(n)

Space is used by the recursive call stack.

## What the Code Does

Takes elements or a string as input from the user.

Uses recursion and swapping to generate permutations.

Produces every possible arrangement of the given elements.

Displays all generated permutations as output.

Demonstrates backtracking by restoring elements after each recursive call.

## Conclusion

This program correctly generates all possible permutations of a given set.

It demonstrates recursion and backtracking techniques used in algorithm design.

Although efficient for small inputs, the number of permutations grows very quickly for large n.

Overall, this program is an important example for understanding combinatorial algorithms in C++.

# Algorithm - Selection Sort (C++)

This program implements the Selection Sort algorithm in C++ to sort a list of elements in ascending order.

It helps in understanding comparison-based sorting by repeatedly selecting the smallest element and placing it in its correct position.

## Aim

To implement Selection Sort in C++ and arrange elements in sorted order.

## Theory

Selection Sort is a simple sorting algorithm that divides the array into two parts:

Sorted part

Unsorted part

Working:

Find the smallest element in the unsorted part.

Swap it with the first unsorted element.

Move the boundary of the sorted part one position forward.

Repeat the process until the entire array becomes sorted.

In each pass:

One minimum element is placed in its correct position.

Unlike Bubble Sort, Selection Sort performs fewer swaps.

## Time Complexity

Best Case:

O(n²)

Average Case:

O(n²)

Worst Case:

O(n²)

The algorithm always performs the same number of comparisons.

## Space Complexity

O(1)

Selection Sort uses constant extra memory since sorting is done in place.

## What the Code Does

Takes array elements as input from the user.

Searches for the smallest element in the unsorted portion.

Swaps it with the correct position.

Repeats the process until the array is fully sorted.

Displays the sorted array as output.

## Conclusion

Selection Sort correctly sorts elements by repeatedly selecting the minimum element.

It is simple to understand and implement.

It performs fewer swaps than Bubble Sort, but it is still inefficient for large datasets due to quadratic time complexity.

Overall, this program is a good example for learning basic sorting algorithms in C++.

# Algorithm - Truth Table (C++)

This program implements a Truth Table generator in C++ for logical expressions.

It helps in understanding Boolean logic, logical operators, and how different combinations of input values affect the output of a logical expression.

## Aim

To implement a C++ program to generate a Truth Table for logical operations.

## Theory

A Truth Table is a table used to show all possible input combinations and their corresponding outputs for a logical expression.

Boolean variables can have only two values:

0 (False)

1 (True)

Common logical operators:

AND (&&)

Output is true only when both inputs are true.

OR (||)

Output is true if at least one input is true.

NOT (!)

Reverses the logical value.

Working:

Generate all possible combinations of input values.

Apply logical operations to each combination.

Display the results in tabular form.

Example for two variables A and B:

A   B   A AND B

0   0     0

0   1     0

1   0     0

1   1     1

For n variables, total combinations are:

2^n

## Time Complexity

O(2^n)

All possible input combinations must be generated.

## Space Complexity

O(1)

Only constant extra memory is used apart from input variables.

## What the Code Does

Takes logical variables or predefined inputs.

Generates all possible combinations of true and false values.

Applies logical operations such as AND, OR, and NOT.

Displays the complete Truth Table as output.

Helps verify logical expressions and Boolean rules.

## Conclusion

This program correctly generates a Truth Table for logical expressions.

It demonstrates Boolean logic and helps understand how logical operators work with different input combinations.

Truth Tables are important in digital logic design, computer science, and algorithm analysis.

Overall, this program is a useful example for understanding logic-based computation in C++.

# Algorithm - Velocity Reduction Using Recursion (C++)

This program implements a recursive algorithm in C++ to solve a velocity reduction problem.

It helps in understanding how recursion can be used to repeatedly reduce a value step by step until a required condition is reached.

## Aim

To implement a C++ program using recursion to reduce velocity until a specified stopping condition is achieved.

## Theory

Recursion is a technique where a function calls itself to solve a smaller version of the same problem.

In this problem, velocity is reduced repeatedly according to a rule until the final condition is met.

Working:

Start with an initial velocity.

Reduce the velocity according to the given condition.

Call the same function again with the reduced velocity.

Continue the process until the base condition is reached.

Base Case:

When velocity reaches zero or the required minimum value, recursion stops.

Recursive Case:

Reduce velocity.

Call the function again with the updated velocity.

This process continues until termination.

This demonstrates repeated problem reduction using recursion.

## Time Complexity

O(n)

Where n represents the number of recursive reductions performed.

## Space Complexity

O(n)

Space is used by the recursive call stack.

## What the Code Does

Takes initial velocity as input from the user.

Applies recursive reduction to decrease velocity step by step.

Continues until the stopping condition is reached.

Displays intermediate or final velocity values depending on implementation.

Demonstrates recursive problem solving using repeated reduction.

## Conclusion

This program correctly performs velocity reduction using recursion.

It demonstrates how a large problem can be broken into smaller repeated steps.

It is useful for understanding:

Recursive functions

Base case and recursive case

Repeated reduction problems

Overall, this program is a good example of applying recursion to solve mathematical or physics-based computational problems in C++.

# Algorithm - Binary Search (C++)

This program implements the Binary Search algorithm in C++ to search an element efficiently in a sorted array.

It helps in understanding divide and conquer and how searching can be optimized by repeatedly reducing the search space by half.

## Aim

To implement Binary Search in C++ to find the position of a given element in a sorted array.

## Theory

Binary Search works only on sorted arrays.

Instead of checking elements one by one, it repeatedly divides the search range into two halves.

Working:

Find the middle element of the array.

Compare the target element with the middle element.

If both are equal, the element is found.

If the target is smaller, search in the left half.

If the target is greater, search in the right half.

Repeat the process until the element is found or the search range becomes empty.

This greatly reduces the number of comparisons.

## Time Complexity

Best Case:

O(1)

(Element found at middle position)

Average Case:

O(log n)

Worst Case:

O(log n)

Search space is halved at each step.

## Space Complexity

Iterative Binary Search:

O(1)

Recursive Binary Search:

O(log n)

## What the Code Does

Takes sorted array elements as input from the user.

Takes the target element to be searched.

Calculates the middle element.

Repeatedly reduces the search range based on comparisons.

Displays the position if the element is found.

Displays a message if the element is not found.

## Conclusion

Binary Search correctly finds an element in a sorted array efficiently.

It is much faster than Linear Search for large datasets.

This program demonstrates divide and conquer and shows how algorithm optimization improves performance.

# Algorithm - Insertion Sort (C++)

This program implements the Insertion Sort algorithm in C++ to sort a list of elements in ascending order.

It helps in understanding how elements are inserted into their correct positions one by one to build a sorted array.

## Aim

To implement Insertion Sort in C++ and arrange elements in sorted order.

## Theory

Insertion Sort works by dividing the array into:

Sorted part

Unsorted part

Initially:

The first element is considered sorted.

Working:

Take the next element from the unsorted part.

Compare it with elements in the sorted part.

Shift larger elements one position to the right.

Insert the element into its correct position.

Repeat until all elements are sorted.

It works similarly to arranging playing cards in hand.

## Time Complexity

Best Case:

O(n)

(Array already sorted)

Average Case:

O(n²)

Worst Case:

O(n²)

(Array in reverse order)

## Space Complexity

O(1)

Sorting is done in place using constant extra memory.

## What the Code Does

Takes array elements as input from the user.

Starts from the second element.

Compares it with previously sorted elements.

Shifts elements when needed.

Inserts the element at the correct position.

Repeats until the entire array is sorted.

Displays the sorted array as output.

## Conclusion

Insertion Sort correctly sorts elements by inserting them into proper positions.

It is simple and efficient for small datasets.

It performs better than Bubble Sort and Selection Sort in some cases, especially when data is nearly sorted.

Overall, this program is a good example for understanding sorting algorithms in C++.

# Algorithm - Merge Sort (C++)

This program implements the Merge Sort algorithm in C++ to sort elements in ascending order.

It helps in understanding divide and conquer by repeatedly dividing the array into smaller parts, sorting them, and merging them back together.

## Aim

To implement Merge Sort in C++ and arrange elements in sorted order.

## Theory

Merge Sort follows the Divide and Conquer technique.

It works in two phases:

Divide Phase

The array is repeatedly divided into two halves until each subarray contains only one element.

Merge Phase

The smaller subarrays are merged back in sorted order to form the final sorted array.

Working:

Divide the array into two halves.

Recursively sort the left half.

Recursively sort the right half.

Merge both sorted halves.

Repeat until the full array is sorted.

This guarantees efficient sorting.

## Time Complexity

Best Case:

O(n log n)

Average Case:

O(n log n)

Worst Case:

O(n log n)

Merge Sort performs consistently in all cases.

## Space Complexity

O(n)

Extra space is required for merging.

## What the Code Does

Takes array elements as input from the user.

Divides the array recursively into smaller parts.

Sorts each part.

Merges sorted subarrays.

Displays the final sorted array.

Demonstrates divide and conquer using recursion.

## Conclusion

Merge Sort correctly sorts elements using recursive division and merging.

It is much more efficient than Bubble Sort, Selection Sort, and Insertion Sort for large datasets.

This program is an important example of divide and conquer in algorithm design.

# Algorithm - Quick Sort (C++)

This program implements the Quick Sort algorithm in C++ to sort elements in ascending order.

It helps in understanding divide and conquer and how partitioning can be used to sort efficiently.

## Aim

To implement Quick Sort in C++ and arrange elements in sorted order.

## Theory

Quick Sort follows the Divide and Conquer technique.

It works using a Pivot element.

Working:

Choose a pivot element.

Partition the array so that:

Elements smaller than pivot go to the left.

Elements greater than pivot go to the right.

Place the pivot in its correct sorted position.

Recursively apply Quick Sort to left subarray.

Recursively apply Quick Sort to right subarray.

Repeat until the array becomes sorted.

This process sorts efficiently through partitioning.

## Time Complexity

Best Case:

O(n log n)

Average Case:

O(n log n)

Worst Case:

O(n²)

(Worst case occurs with poor pivot selection)

## Space Complexity

Average:

O(log n)

Worst Case:

O(n)

Space is used by recursive calls.

## What the Code Does

Takes array elements as input from the user.

Selects a pivot.

Partitions the array.

Recursively sorts left and right partitions.

Displays the sorted array as output.

Demonstrates partitioning and divide and conquer.

## Conclusion

Quick Sort correctly sorts elements using partitioning.

It is one of the fastest practical sorting algorithms.

Although worst-case performance can be O(n²), proper pivot selection makes it highly efficient in most cases.

This program is an important example of divide and conquer in C++.

# Algorithm - K-th Smallest Element (C++)

This program implements an algorithm in C++ to find the K-th smallest element in a set of numbers.

It helps in understanding selection problems and how sorting or comparison techniques can be used to identify a specific ranked element.

## Aim

To implement a C++ program to find the K-th smallest element in an array.

## Theory

The K-th smallest element means the element that would appear at position K if the array were sorted.

Example:

Array:

7 3 9 1 5

Sorted Array:

1 3 5 7 9

If K = 3

Then the 3rd smallest element is:

5

Working:

Take array elements as input.

Arrange elements in sorted order.

Identify the element at position K.

Return that element as the answer.

This can be solved using sorting or optimized selection methods.

## Time Complexity

Using Sorting:

O(n log n)

Using optimized selection algorithms:

Can be improved depending on implementation.

## Space Complexity

O(1)

(If sorting is done in place)

## What the Code Does

Takes array elements as input from the user.

Takes the value of K.

Sorts or processes the array.

Finds the K-th smallest element.

Displays the result.

## Conclusion

This program correctly finds the K-th smallest element in an array.

It demonstrates ranking and selection problems in algorithms.

This is an important concept used in searching, optimization, and order statistics problems.

# Algorithm - Min-Max Problem (C++)

This program implements an algorithm in C++ to find the minimum and maximum element in an array.

It helps in understanding comparison-based optimization and how both values can be found efficiently.

## Aim

To implement a C++ program to find the minimum and maximum values in an array.

## Theory

The Min-Max problem finds:

Smallest element (Minimum)

Largest element (Maximum)

Basic Working:

Compare elements one by one.

Update minimum when a smaller value is found.

Update maximum when a larger value is found.

Continue until all elements are checked.

Efficient Divide and Conquer Method:

Split the array into smaller parts.

Find min and max in each part.

Combine the results.

This reduces unnecessary comparisons.

## Time Complexity

O(n)

Each element is checked once.

## Space Complexity

O(1)

Only constant extra memory is used.

## What the Code Does

Takes array elements as input from the user.

Compares elements to determine minimum value.

Compares elements to determine maximum value.

Displays both minimum and maximum elements.

Demonstrates efficient comparison techniques.

## Conclusion

This program correctly finds the minimum and maximum elements in an array.

It demonstrates optimization by reducing comparisons.

This is a fundamental problem in algorithm design and helps in understanding efficient searching techniques.

# Algorithm - Convex Hull (C++)

This program implements the Convex Hull algorithm in C++ to find the smallest convex boundary that encloses a set of points.

It helps in understanding computational geometry and how geometric algorithms are used to solve boundary problems.

## Aim

To implement a C++ program to find the Convex Hull of a given set of points.

## Theory

A Convex Hull is the smallest convex polygon that contains all given points.

It can be imagined as:

Stretching a rubber band around all points.

When released, the rubber band forms the convex hull.

Points lying inside the boundary are ignored.

Only outer boundary points form the hull.

Working:

Take all coordinate points as input.

Identify boundary points.

Connect outermost points in correct order.

Form the convex polygon.

Common algorithms used:

Graham Scan

Jarvis March

Divide and Conquer approaches

The result is the outer boundary enclosing all points.

## Time Complexity

Depends on algorithm used.

Typical complexity:

O(n log n)

## Space Complexity

O(n)

## What the Code Does

Takes coordinate points as input from the user.

Processes the points using a Convex Hull algorithm.

Identifies points forming the outer boundary.

Displays the points included in the Convex Hull.

Demonstrates geometric problem solving.

## Conclusion

This program correctly finds the Convex Hull of a set of points.

It demonstrates important concepts in computational geometry.

Convex Hull is widely used in graphics, robotics, path planning, and geometric optimization problems.

# Algorithm - Knapsack Problem (C++)

This program implements the Knapsack Problem in C++ to find the maximum value that can be carried within a fixed weight limit.

It helps in understanding optimization techniques using Greedy or Dynamic Programming approaches.

## Aim

To implement a C++ program to solve the Knapsack Problem.

## Theory

The Knapsack Problem involves:

Items with:

Weight

Value

A bag (Knapsack) with limited capacity.

Objective:

Select items so that:

Total weight does not exceed capacity.

Total value is maximized.

Working:

Check available items.

Decide which items should be selected.

Optimize selection for maximum profit.

Types:

0/1 Knapsack

An item is either taken or not taken.

Fractional Knapsack

Items can be taken partially.

Dynamic Programming is commonly used for 0/1 Knapsack.

Greedy methods are commonly used for Fractional Knapsack.

## Time Complexity

Using Dynamic Programming:

O(nW)

Where:

n = number of items

W = knapsack capacity

## Space Complexity

O(nW)

Space used by DP table.

## What the Code Does

Takes item weights and values as input.

Takes knapsack capacity.

Computes the best possible item selection.

Finds maximum achievable profit.

Displays the optimal result.

Demonstrates optimization problem solving.

## Conclusion

This program correctly solves the Knapsack optimization problem.

It demonstrates important algorithm design techniques such as Greedy methods and Dynamic Programming.

Knapsack is a fundamental problem used in resource allocation, optimization, and decision-making problems.

# Algorithm - Activity Selection (C++)

This program implements the Activity Selection algorithm in C++ to select the maximum number of non-overlapping activities.

It helps in understanding Greedy algorithms and how making locally optimal choices can lead to a globally optimal solution.

## Aim

To implement a C++ program to solve the Activity Selection problem.

## Theory

In this problem, each activity has:

Start Time

Finish Time

Objective:

Select the maximum number of activities such that no selected activities overlap.

Greedy Strategy:

Sort activities according to finishing time.

Select the activity that finishes first.

Then select the next activity whose start time is greater than or equal to the finish time of the last selected activity.

Repeat until all activities are considered.

This works because selecting the earliest finishing activity leaves maximum room for remaining activities.

## Time Complexity

Sorting Step:

O(n log n)

Selection Step:

O(n)

Overall:

O(n log n)

## Space Complexity

O(1)

(Excluding input storage)

## What the Code Does

Takes activity start and finish times as input.

Sorts activities based on finishing time.

Selects compatible non-overlapping activities.

Finds the maximum number of activities possible.

Displays selected activities or total count.

## Conclusion

This program correctly solves the Activity Selection problem using a Greedy approach.

It demonstrates how local optimal decisions can produce a globally optimal solution.

This is an important example of Greedy algorithm design in C++.

# Algorithm - Dijkstra Algorithm (C++)

This program implements Dijkstra’s Algorithm in C++ to find the shortest path from a source vertex to all other vertices in a weighted graph.

It helps in understanding graph algorithms and shortest path optimization.

## Aim

To implement a C++ program to find shortest paths using Dijkstra’s Algorithm.

## Theory

Dijkstra’s Algorithm finds the minimum distance from a source node to all other nodes in a graph with non-negative edge weights.

Working:

Initialize source distance as 0.

Set all other distances as infinity.

Select the unvisited vertex with minimum distance.

Update distances of its neighboring vertices.

Repeat until all vertices are visited.

This process guarantees shortest paths.

Greedy Idea:

Always choose the nearest unvisited vertex.

## Time Complexity

Basic Implementation:

O(V²)

Using Priority Queue:

O((V + E) log V)

## Space Complexity

O(V)

## What the Code Does

Takes graph input from the user.

Takes source vertex.

Calculates shortest distance to all vertices.

Updates paths using Dijkstra’s algorithm.

Displays shortest path distances.

Demonstrates graph traversal and optimization.

## Conclusion

This program correctly finds shortest paths using Dijkstra’s Algorithm.

It demonstrates Greedy methods in graph problems.

Dijkstra’s Algorithm is widely used in routing, navigation systems, and network optimization.

# Algorithm - Kruskal Algorithm (C++)

This program implements Kruskal’s Algorithm in C++ to find the Minimum Spanning Tree (MST) of a weighted graph.

It helps in understanding Greedy algorithms and how minimum-cost edges can be selected to connect all vertices without forming cycles.

## Aim

To implement a C++ program to find the Minimum Spanning Tree using Kruskal’s Algorithm.

## Theory

A Minimum Spanning Tree is a subset of graph edges that:

Connects all vertices

Contains no cycles

Has minimum total edge weight

Kruskal’s Algorithm follows a Greedy approach.

Working:

Sort all edges in increasing order of weight.

Select the smallest edge.

Include it if it does not form a cycle.

Repeat until V-1 edges are selected.

Cycle Detection:

Usually done using Disjoint Set (Union-Find).

Greedy Idea:

Always choose the smallest possible edge that does not create a cycle.

## Time Complexity

Sorting edges:

O(E log E)

Union-Find operations:

Nearly constant (optimized)

Overall:

O(E log E)

## Space Complexity

O(V)

## What the Code Does

Takes graph edges and weights as input.

Sorts edges by weight.

Selects edges while avoiding cycles.

Builds the Minimum Spanning Tree.

Displays selected edges and total minimum cost.

Demonstrates Greedy graph optimization.

## Conclusion

This program correctly finds the Minimum Spanning Tree using Kruskal’s Algorithm.

It demonstrates Greedy methods and cycle detection in graph problems.

Kruskal’s Algorithm is widely used in network design, road planning, and optimization problems.

# Algorithm - Prim Algorithm (C++)

This program implements Prim’s Algorithm in C++ to find the Minimum Spanning Tree (MST) of a weighted graph.

It helps in understanding Greedy algorithms and how a tree can be built by repeatedly choosing the minimum-weight edge.

## Aim

To implement a C++ program to find the Minimum Spanning Tree using Prim’s Algorithm.

## Theory

A Minimum Spanning Tree is a subset of graph edges that:

Connects all vertices

Contains no cycles

Has minimum total edge weight

Prim’s Algorithm follows a Greedy approach.

Working:

Start from any vertex.

Select the minimum weight edge connected to the current tree.

Add the new vertex to the tree.

Repeat until all vertices are included.

Greedy Idea:

Always choose the smallest edge connecting a visited vertex to an unvisited vertex.

Unlike Kruskal’s Algorithm:

Prim grows one tree.

Kruskal selects edges globally.

## Time Complexity

Basic Implementation:

O(V²)

Using Priority Queue:

O((V + E) log V)

## Space Complexity

O(V)

## What the Code Does

Takes graph input from the user.

Starts from a chosen vertex.

Selects minimum-weight edges.

Builds the Minimum Spanning Tree.

Displays selected edges and total minimum cost.

Demonstrates Greedy graph optimization.

## Conclusion

This program correctly finds the Minimum Spanning Tree using Prim’s Algorithm.

It demonstrates Greedy methods in graph problems.

Prim’s Algorithm is widely used in network design, communication systems, and optimization problems.

# Algorithm - Matrix Chain Multiplication (C++)

This program implements Matrix Chain Multiplication in C++ to find the most efficient order of multiplying a sequence of matrices.

It helps in understanding dynamic programming and how optimization can reduce the total number of scalar multiplications.

## Aim

To implement a C++ program to determine the optimal order of matrix multiplication.

## Theory

When multiple matrices are multiplied, the final result remains the same regardless of multiplication order.

However, the number of computations can vary greatly.

Example:

(A × B) × C

may require more operations than:

A × (B × C)

The objective is to find the parenthesization that minimizes multiplication cost.

Dynamic Programming Approach:

Break the problem into smaller subproblems.

Compute minimum multiplication cost for smaller matrix chains.

Store intermediate results.

Use those results to compute the minimum cost for the full chain.

This avoids repeated calculations.

## Time Complexity

O(n³)

Three nested loops are used in standard DP solution.

## Space Complexity

O(n²)

Space is used for storing the DP table.

## What the Code Does

Takes matrix dimensions as input.

Computes multiplication cost for different orders.

Uses dynamic programming to find minimum scalar multiplications.

Displays the minimum cost.

May display optimal multiplication order depending on implementation.

## Conclusion

This program correctly solves Matrix Chain Multiplication using dynamic programming.

It demonstrates optimization using overlapping subproblems and optimal substructure.

This is an important example of Dynamic Programming in algorithm design.

# Algorithm - Multistage Graph (C++)

This program implements a Multistage Graph algorithm in C++ to find the shortest path from source to destination.

It helps in understanding Dynamic Programming and shortest path optimization in staged graphs.

## Aim

To implement a C++ program to find the shortest path in a Multistage Graph.

## Theory

A Multistage Graph is a directed graph divided into stages.

Vertices are grouped into levels or stages.

Edges connect vertices from one stage to the next.

Objective:

Find the minimum-cost path from source to destination.

Dynamic Programming Approach:

Start from destination.

Compute minimum cost backward for each vertex.

Store the best cost at every stage.

Use stored results to construct the shortest path.

Working:

Process graph stage by stage.

Calculate minimum path cost.

Select optimal path.

Display shortest route.

This avoids repeated computations.

## Time Complexity

O(n²)

Depends on graph representation and implementation.

## Space Complexity

O(n)

For storing costs and path information.

## What the Code Does

Takes graph input from the user.

Processes the graph stage by stage.

Computes minimum cost path.

Finds shortest path from source to destination.

Displays optimal path and total cost.

Demonstrates Dynamic Programming in graph problems.

## Conclusion

This program correctly finds the shortest path in a Multistage Graph.

It demonstrates Dynamic Programming for graph optimization.

This algorithm is useful in routing, decision processes, and staged optimization problems.
