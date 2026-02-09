# Algorithm-
# 🗼 Tower of Hanoi in C++ (Using Recursion)

This project demonstrates how to solve the classic **Tower of Hanoi** problem using **recursion in C++**.  
The program asks the user for the number of disks and then prints all the steps required to move the disks from the source rod to the destination rod.

---

## 🎯 Aim

To write a C++ program using recursion that solves the Tower of Hanoi problem and displays the sequence of moves needed to transfer all disks from one rod to another using an auxiliary rod.

---

## 📘 Theory

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

---

## ⏱ Time Complexity : - O(n^2)
## 💾 Space Complexity : - O(n)


---

## ✅ Conclusion

This program clearly shows how recursion works by solving the Tower of Hanoi step by step.

It is great for learning:

- Recursive functions
- Divide and conquer approach
- Call stack behavior

Although the solution is elegant, it becomes slow for large values of `n` because the time complexity is exponential.

Overall, this is a perfect beginner example to understand **recursion in C++**.

