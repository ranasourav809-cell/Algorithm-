# Algorithm-

# 🔢 Power of a Number Using Recursion (C++)

This program calculates the value of a number raised to a given power using **two different recursive approaches** in C++.  
It helps us understand how recursion works and why an optimized recursive solution is more efficient than a simple one.

---

## 🎯 Aim

To implement and compare two recursive methods in C++ to calculate the value of a number raised to the power `n`.

---

## 📘 Theory

Recursion is a programming technique in which a function calls itself to solve a smaller version of the same problem.

In this program, the power of a number \( x^n \) is calculated using two recursive methods:

### 1. Optimized Recursive Method (Divide and Conquer)

This method improves efficiency by dividing the exponent into halves.

- If the exponent is `0`, the result is `1`.
- If the exponent is negative, it converts it to a positive exponent and returns the reciprocal.
- The function recursively calculates \( x^{n/2} \).
- If `n` is even, the result is the square of the half value.
- If `n` is odd, the result is multiplied by `x` one extra time.

This approach reduces the number of recursive calls and works well for large values of `n`.

---

### 2. Simple Recursive Method

This method follows the direct mathematical definition:

\[
x^n = x \times x^{n-1}
\]

- If the exponent is `0`, the result is `1`.
- If the exponent is negative, it returns the reciprocal of the positive power.
- Otherwise, it keeps multiplying `x` until the exponent becomes zero.

This method is easy to understand but is slower for large values of `n`.

---

## ⏱ Time Complexity

- **Optimized Recursive Method:** `O(log n)`  
  (Exponent is divided by 2 at each step)

- **Simple Recursive Method:** `O(n)`  
  (One recursive call for each decrement of `n`)

---

## 💾 Space Complexity

- **Optimized Recursive Method:** `O(log n)`  
- **Simple Recursive Method:** `O(n)`  

The space is used by the recursive call stack.

---

## 🧠 What the Code Does

- Takes the base value `x` and exponent `n` as input from the user.
- Calculates the power using:
  - An optimized recursive function (`powerRec`)
  - A simple recursive function (`powerRec2`)
- Handles zero and negative powers correctly.
- Prints the result of both methods so they can be compared easily.

This makes it clear how different recursive strategies affect performance.

---

## ✅ Conclusion

Both recursive methods correctly compute the power of a number.

The **optimized recursive method** is more efficient because it reduces the number of recursive calls by using a divide-and-conquer approach.  
The **simple recursive method** is easier to understand but becomes slow for large values of the exponent.

Overall, this program is a good example of how algorithm optimization can greatly improve performance while using the same basic idea.

---

### ✨ Author

C++ Recursive Programming  
Power Calculation using Recursion

# 🗼 Tower of Hanoi in C++ (Using Recursion)

This project demonstrates how to solve the classic **Tower of Hanoi** problem using **recursion in C++**.  
The program asks the user for the number of disks and then prints all the steps required to move the disks from the source rod to the destination rod.

---

## Aim

To write a C++ program using recursion that solves the Tower of Hanoi problem and displays the sequence of moves needed to transfer all disks from one rod to another using an auxiliary rod.

---

## Theory

Tower of Hanoi is a well-known recursive problem.

It uses **three rods**:

- Source (starting rod)
- Destination (target rod)
- Extra / Auxiliary (helper rod)

### Rules:

1. Only **one disk** can be moved at a time.
2. A **larger disk cannot be placed on a smaller disk**.
3. All disks must finally reach the destination rod.

### Recursive idea:

To move `n` disks from Source to Destination:

1. Move `n-1` disks from Source to Extra.
2. Move the largest disk from Source to Destination.
3. Move `n-1` disks from Extra to Destination.

This process repeats until only **one disk** remains (base case).

---

## 🧠 What This Code Does

- Takes the number of disks as input from the user.
- Uses a recursive function `TOH()` to:
  - Break the problem into smaller parts.
  - Print each move step-by-step.
- Shows exactly how each disk travels between rods.

### Function Explanation

### `TOH(n, src, dest, ex)`

- `n` → number of disks  
- `src` → source rod  
- `dest` → destination rod  
- `ex` → extra rod  

#### Base Case:
If `n == 1`, the program directly moves the disk from source to destination.

#### Recursive Case:
- Move `n-1` disks to extra rod.
- Move the main disk to destination.
- Move `n-1` disks from extra to destination.


## ⏱ Time Complexity : - O(n^2)
## 💾 Space Complexity : - O(n)


## ✅ Conclusion

This program clearly shows how recursion works by solving the Tower of Hanoi step by step.

It is great for learning:

- Recursive functions
- Divide and conquer approach
- Call stack behavior

Although the solution is elegant, it becomes slow for large values of `n` because the time complexity is exponential.

Overall, this is a perfect beginner example to understand **recursion in C++**.

