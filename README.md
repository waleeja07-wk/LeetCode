# LeetCode

This repository contains my solutions to LeetCode problems, organized as I solve them. It serves as a personal record of my problem-solving journey, and hopefully as a useful reference for others working through similar problems.

## Language

All solutions are written in **C++**.

## Folder Structure

Problems are organized by **difficulty**, and each solution file is named using the **problem number**. This keeps the repo clean and makes it easy to find or compare solutions.

```
LeetCode/
├── Easy/
│   ├── 1.cpp
│   └── ...
├── Medium/
│   ├── 167.cpp
│   └── ...
├── Hard/
│   ├── 4.cpp
│   └── ...
└── README.md
```

## Workflow

Every time I solve a new problem, I follow the same process to keep things organized and consistent:

1. Solve the problem on leetCode in C++.
2. When accepted, I make a file locally and save the solution file in the correct difficulty folder (`Easy`, `Medium`, or `Hard`), named with the problem number (e.g. `1.cpp`).
3. Test and confirm the solution works.
4. Commit and push:
   ```bash
   git add .
   git commit -m "Add solution for LeetCode Problem 1"
   git push
   ```

This way, the repo grows incrementally and stays organized, and anyone browsing it can track progress problem-by-problem through the commit history.

## Clean Repo

Compiled `.exe` files are excluded via `.gitignore` and have been removed from tracking, keeping the repository focused only on source code.

## Purpose

- **For me:** a structured log of my progress and a quick way to revisit past solutions.
- **For others:** a reference for C++ approaches to LeetCode problems, organized clearly enough to browse by difficulty or search by problem number.

Feel free to explore, learn, and suggest improvements!
