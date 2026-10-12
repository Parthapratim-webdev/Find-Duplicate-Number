# Find the Duplicate Number 🔍

## 📌 Description

This C++ program finds the duplicate number in an array using **Floyd’s Cycle Detection Algorithm**. It solves the problem in **O(n) time complexity** and **O(1) space complexity**.

## ⚙️ Workflow

1. Initialize `slow` and `fast` pointers with `arr[0]`.
2. Move `slow` one step and `fast` two steps until they meet.
3. Reset `slow` to `arr[0]`.
4. Move both pointers one step at a time until they meet again.
5. Return the meeting value as the duplicate number.

## 📊 Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[Initialize slow = arr[0], fast = arr[0]]
    B --> C[Move slow one step and fast two steps]
    C --> D{slow == fast?}
    D -- No --> C
    D -- Yes --> E[Reset slow = arr[0]]
    E --> F{slow == fast?}
    F -- No --> G[Move slow and fast one step]
    G --> F
    F -- Yes --> H[Return slow as duplicate]
    H --> I([End])

    style A fill:#d4edda,stroke:#28a745,color:#000
    style I fill:#d4edda,stroke:#28a745,color:#000
    style D fill:#fff3cd,stroke:#ffc107,color:#000
    style F fill:#fff3cd,stroke:#ffc107,color:#000
    style H fill:#cce5ff,stroke:#007bff,color:#000
```

## 💻 Example

**Input:**

```text
arr = [1, 3, 4, 2, 2]
```

**Output:**

```text
Duplicate number: 2
```

## ⏱️ Complexity Analysis

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)

## 🧠 Algorithm

Floyd’s Cycle Detection Algorithm uses two pointers, `slow` and `fast`, to detect a cycle and identify the duplicate number without modifying the array.
