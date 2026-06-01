# 🚀 DSA & OOPS Summer Assignment

**Roll No**: 2401921530130

---

## 📁 Repository Structure

```
Summer_Assignment_2401921530130/
│
├── 📂 Week_1/                    # Arrays + Basic Strings
│   ├── 📂 Day_1/                 # Array Basics
│   ├── 📂 Day_2/                 # Prefix Sum / Sliding Window
│   ├── 📂 Day_3/                 # Two Pointer
│   ├── 📂 Day_4/                 # Matrix Problems
│   ├── 📂 Day_5/                 # String Basics
│   └── 📂 OOPS/                  # Interface — LibraryUser
│
├── 📂 Week_2/                    # Strings (Advanced)
│   ├── 📂 Day_1/                 # Hashing in Strings
│   ├── 📂 Day_2/                 # Sliding Window on Strings
│   ├── 📂 Day_3/                 # Pattern Matching
│   ├── 📂 Day_4/                 # Recursion + Strings
│   ├── 📂 Day_5/                 # Mixed String Problems
│   └── 📂 OOPS/                  # Interface — Playable (music package)
│
├── 📂 Week_3/                    # Linked List + Stack + Queue
│   ├── 📂 Day_1/                 # Linked List Basics
│   ├── 📂 Day_2/                 # Linked List Advanced
│   ├── 📂 Day_3/                 # Stack Basics
│   ├── 📂 Day_4/                 # Stack Advanced (Monotonic)
│   ├── 📂 Day_5/                 # Queue / Deque
│   └── 📂 OOPS/                  # Abstract Class — Compartment
│
└── 📂 Week_4/                    # Trees
    ├── 📂 Day_1/                 # Binary Tree Basics
    ├── 📂 Day_2/                 # Traversals
    ├── 📂 Day_3/                 # Binary Search Tree
    ├── 📂 Day_4/                 # Path Based Problems
    ├── 📂 Day_5/                 # Advanced Trees
    └── 📂 OOPS/                  # Interface + Inner Class + Point + Box
```

---

## 📅 WEEK 1 — Arrays + Basic Strings

### Day 1: Array Basics
| # | Problem | Link |
|---|---------|------|
| 1 | Two Sum | https://leetcode.com/problems/two-sum/ |
| 2 | Remove Duplicates from Sorted Array | https://leetcode.com/problems/remove-duplicates-from-sorted-array/ |
| 3 | Best Time to Buy and Sell Stock | https://leetcode.com/problems/best-time-to-buy-and-sell-stock/ |

### Day 2: Prefix Sum / Sliding Window
| # | Problem | Link |
|---|---------|------|
| 1 | Maximum Subarray | https://leetcode.com/problems/maximum-subarray/ |
| 2 | Contains Duplicate | https://leetcode.com/problems/contains-duplicate/ |
| 3 | Maximum Average Subarray I | https://leetcode.com/problems/maximum-average-subarray-i/ |

### Day 3: Two Pointer
| # | Problem | Link |
|---|---------|------|
| 1 | Move Zeroes | https://leetcode.com/problems/move-zeroes/ |
| 2 | Squares of a Sorted Array | https://leetcode.com/problems/squares-of-a-sorted-array/ |
| 3 | Container With Most Water | https://leetcode.com/problems/container-with-most-water/ |

### Day 4: Matrix Problems
| # | Problem | Link |
|---|---------|------|
| 1 | Matrix Diagonal Sum | https://leetcode.com/problems/matrix-diagonal-sum/ |
| 2 | Reshape the Matrix | https://leetcode.com/problems/reshape-the-matrix/ |
| 3 | Spiral Matrix | https://leetcode.com/problems/spiral-matrix/ |

### Day 5: String Basics
| # | Problem | Link |
|---|---------|------|
| 1 | Valid Palindrome | https://leetcode.com/problems/valid-palindrome/ |
| 2 | Reverse String | https://leetcode.com/problems/reverse-string/ |
| 3 | Longest Common Prefix | https://leetcode.com/problems/longest-common-prefix/ |

### OOPS — Week 1: Interface (LibraryUser)

**Topic**: Interface

A library needs to develop an online application for two types of users — Adults and Children.

- Create an interface `LibraryUser` with methods: `registerAccount` and `requestBook`
- Create classes `KidUser` and `AdultUser` which implement `LibraryUser`
- Both classes have instance variables: `age` (int) and `bookType` (String)

**KidUser logic:**
- `registerAccount`: if age < 12 → "You have successfully registered under a Kids Account"; if age > 12 → "Sorry, Age must be less than 12 to register as a kid"
- `requestBook`: if bookType is "Kids" → "Book Issued successfully, please return the book within 10 days"; else → "Oops, you are allowed to take only kids books"

**AdultUser logic:**
- `registerAccount`: if age > 12 → "You have successfully registered under an Adult Account"; if age < 12 → "Sorry, Age must be greater than 12 to register as an adult"
- `requestBook`: if bookType is "Fiction" → "Book Issued successfully, please return the book within 7 days"; else → "Oops, you are allowed to take only adult Fiction books"

**File**: `Week_1/OOPS/LibraryInterfaceDemo.java`

---

## 📅 WEEK 2 — Strings (Advanced)

### Day 1: Hashing in Strings
| # | Problem | Link |
|---|---------|------|
| 1 | Valid Anagram | https://leetcode.com/problems/valid-anagram/ |
| 2 | First Unique Character in a String | https://leetcode.com/problems/first-unique-character-in-a-string/ |
| 3 | Ransom Note | https://leetcode.com/problems/ransom-note/ |

### Day 2: Sliding Window on Strings
| # | Problem | Link |
|---|---------|------|
| 1 | Longest Substring Without Repeating Characters | https://leetcode.com/problems/longest-substring-without-repeating-characters/ |
| 2 | Permutation in String | https://leetcode.com/problems/permutation-in-string/ |
| 3 | Find All Anagrams in a String | https://leetcode.com/problems/find-all-anagrams-in-a-string/ |

### Day 3: Pattern Matching
| # | Problem | Link |
|---|---------|------|
| 1 | Implement strStr() | https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/ |
| 2 | Is Subsequence | https://leetcode.com/problems/is-subsequence/ |
| 3 | Repeated Substring Pattern | https://leetcode.com/problems/repeated-substring-pattern/ |

### Day 4: Recursion + Strings
| # | Problem | Link |
|---|---------|------|
| 1 | Reverse Words in a String III | https://leetcode.com/problems/reverse-words-in-a-string-iii/ |
| 2 | Decode String | https://leetcode.com/problems/decode-string/ |
| 3 | Generate Parentheses | https://leetcode.com/problems/generate-parentheses/ |

### Day 5: Mixed String Problems
| # | Problem | Link |
|---|---------|------|
| 1 | Group Anagrams | https://leetcode.com/problems/group-anagrams/ |
| 2 | String Compression | https://leetcode.com/problems/string-compression/ |
| 3 | Longest Palindromic Substring | https://leetcode.com/problems/longest-palindromic-substring/ |

### OOPS — Week 2: Interface (Playable — music package)

**Topic**: Interface + Packages

- Create interface `Playable` with method `void play()` — place in package `music`
- Create class `Veena` implementing `Playable` — place in package `music.string`
- Create class `Saxophone` implementing `Playable` — place in package `music.wind`
- Create class `Test` in package `live`:
  - a. Create instance of Veena and call `play()`
  - b. Create instance of Saxophone and call `play()`
  - c. Place the above instances in a variable of type `Playable` and call `play()`

**File**: `Week_2/OOPS/PlayableDemo.java`

---

## 📅 WEEK 3 — Linked List + Stack + Queue

### Part A — Linked List

#### Day 1
| # | Problem | Link |
|---|---------|------|
| 1 | Linked List Cycle | https://leetcode.com/problems/linked-list-cycle/ |
| 2 | Reverse Linked List | https://leetcode.com/problems/reverse-linked-list/ |
| 3 | Middle of the Linked List | https://leetcode.com/problems/middle-of-the-linked-list/ |

#### Day 2
| # | Problem | Link |
|---|---------|------|
| 1 | Merge Two Sorted Lists | https://leetcode.com/problems/merge-two-sorted-lists/ |
| 2 | Remove Nth Node From End of List | https://leetcode.com/problems/remove-nth-node-from-end-of-list/ |
| 3 | Palindrome Linked List | https://leetcode.com/problems/palindrome-linked-list/ |

### Part B — Stack

#### Day 3
| # | Problem | Link |
|---|---------|------|
| 1 | Valid Parentheses | https://leetcode.com/problems/valid-parentheses/ |
| 2 | Min Stack | https://leetcode.com/problems/min-stack/ |
| 3 | Next Greater Element I | https://leetcode.com/problems/next-greater-element-i/ |

#### Day 4
| # | Problem | Link |
|---|---------|------|
| 1 | Daily Temperatures | https://leetcode.com/problems/daily-temperatures/ |
| 2 | Evaluate Reverse Polish Notation | https://leetcode.com/problems/evaluate-reverse-polish-notation/ |
| 3 | Largest Rectangle in Histogram | https://leetcode.com/problems/largest-rectangle-in-histogram/ |

### Part C — Queue / Deque

#### Day 5
| # | Problem | Link |
|---|---------|------|
| 1 | Implement Queue using Stacks | https://leetcode.com/problems/implement-queue-using-stacks/ |
| 2 | Number of Recent Calls | https://leetcode.com/problems/number-of-recent-calls/ |
| 3 | Sliding Window Maximum | https://leetcode.com/problems/sliding-window-maximum/ |

### OOPS — Week 3: Abstract Class (Compartment)

**Topic**: Abstract Class + Polymorphism

- Create abstract class `Compartment` with abstract method `public abstract String notice()`
- Derive classes: `FirstClass`, `Ladies`, `General`, `Luggage` — each overrides `notice()`
- Create class `TestCompartment` with main method:
  - Declare an array of `Compartment` of size 10
  - Randomly generate integer in range 1–4 to decide compartment type for each slot
  - Demonstrate polymorphic behavior of `notice()` method

**File**: `Week_3/OOPS/TestCompartment.java`

---

## 📅 WEEK 4 — Trees

### Day 1: Binary Tree Basics
| # | Problem | Link |
|---|---------|------|
| 1 | Maximum Depth of Binary Tree | https://leetcode.com/problems/maximum-depth-of-binary-tree/ |
| 2 | Invert Binary Tree | https://leetcode.com/problems/invert-binary-tree/ |
| 3 | Same Tree | https://leetcode.com/problems/same-tree/ |

### Day 2: Traversals
| # | Problem | Link |
|---|---------|------|
| 1 | Binary Tree Inorder Traversal | https://leetcode.com/problems/binary-tree-inorder-traversal/ |
| 2 | Binary Tree Level Order Traversal | https://leetcode.com/problems/binary-tree-level-order-traversal/ |
| 3 | Binary Tree Zigzag Level Order Traversal | https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/ |

### Day 3: Binary Search Tree
| # | Problem | Link |
|---|---------|------|
| 1 | Search in a Binary Search Tree | https://leetcode.com/problems/search-in-a-binary-search-tree/ |
| 2 | Validate Binary Search Tree | https://leetcode.com/problems/validate-binary-search-tree/ |
| 3 | Lowest Common Ancestor of a BST | https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/ |

### Day 4: Path Based Problems
| # | Problem | Link |
|---|---------|------|
| 1 | Path Sum | https://leetcode.com/problems/path-sum/ |
| 2 | Diameter of Binary Tree | https://leetcode.com/problems/diameter-of-binary-tree/ |
| 3 | Binary Tree Maximum Path Sum | https://leetcode.com/problems/binary-tree-maximum-path-sum/ |

### Day 5: Advanced Trees
| # | Problem | Link |
|---|---------|------|
| 1 | Symmetric Tree | https://leetcode.com/problems/symmetric-tree/ |
| 2 | Construct Binary Tree from Preorder and Inorder Traversal | https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/ |
| 3 | Serialize and Deserialize Binary Tree | https://leetcode.com/problems/serialize-and-deserialize-binary-tree/ |

### OOPS — Week 4: Mixed (4 Questions)

**Topic**: Interface + Inner Class + Encapsulation + Inheritance

**Q1 — Interface:**
- Create interface `Test` with method `square()`
- Implement in class `Arithmetic`
- Use the object of `Arithmetic` in class `ToTestInt`

**Q2 — Inner Class:**
- Create an outer class with method `display()`
- Create inner class `Inner` with method `display()`
- Call both functions from main

**Q3 — Class Point:**
- Instance variables: `private int x, y`
- Constructors: `public Point()`, `Point(int x, int y)`
- Methods: `public void setX(int x)`, `setY(int y)`, `setXY(int x, int y)`

**Q4 — Class Box and Box3D:**
- Create class `Box` and subclass `Box3D` (extends Box)
- Include constructors
- Set values for length, breadth, height
- Methods to find area and volume
- Base class and subclass have their respective methods and instance variables

**Files**: `Week_4/OOPS/`

---

## 📌 File Naming Convention

| Type | Pattern | Example |
|------|---------|---------|
| LeetCode Solution (C++) | `<problem-number>.cpp` | `1.cpp` |
| OOPS Program (Java) | `<DescriptiveName>.java` | `LibraryInterfaceDemo.java` |

---

## 👤 Author

**Roll No**: 2401921530130
