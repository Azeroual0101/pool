# 42 Piscine — C & Shell

**1337 Coding School | 42 Network | C Programming & Unix Shell**

## 📖 Overview

The **42 Piscine** is an intensive programming bootcamp designed to introduce students to fundamental computer science concepts through practical exercises, independent learning, and peer collaboration.

This repository contains my work from the Piscine at **1337 Coding School**, part of the 42 Network.

The exercises focus on **C programming, Unix Shell, algorithms, memory management, and problem-solving**, building a foundation for more advanced software development projects.

## 🎯 Objectives

- Develop a strong foundation in C programming.
- Become comfortable working in a Unix/Linux environment.
- Understand variables, pointers, arrays, and memory management.
- Practice algorithms, recursion, and string manipulation.
- Learn file operations and command-line tools.
- Improve debugging and problem-solving skills.
- Develop independence through project-based learning and peer evaluation.

## 🛠️ Technologies & Tools

| Technology | Purpose |
|---|---|
| C | Low-level programming and algorithms |
| Unix Shell | Command-line scripting and automation |
| GCC / Clang | C compilation |
| Git | Version control |
| Vim / Terminal | Code editing and development |
| Unix Commands | File manipulation and system navigation |

## 📂 Repository Structure

```text
pool/
├── C00/
├── C01/
├── C02/
├── C03/
├── C04/
├── C05/
├── C06/
├── C07/
├── C08/
├── C09/
├── Shell00/
├── Shell01/
└── shell00/
```

The repository is organized into progressive C programming modules and Shell exercises.

## 📚 C Programming Modules

| Module | Main Topics |
|---|---|
| **C00** | Introduction to C, `write()`, loops, conditions, and basic output |
| **C01** | Pointers, variable manipulation, arrays, and strings |
| **C02** | String functions, character classification, and string manipulation |
| **C03** | String comparison, concatenation, and searching |
| **C04** | String processing, number conversion, and basic I/O |
| **C05** | Recursion, factorials, powers, Fibonacci, and mathematical algorithms |
| **C06** | Command-line arguments (`argc`, `argv`) |
| **C07** | Dynamic memory allocation and string operations |
| **C08** | Header files, macros, structures, and modular programming |
| **C09** | Libraries, Makefiles, and reusable C components |

These descriptions summarize the standard topics covered by the 42 Piscine C modules.

## 🐚 Shell Modules

The Shell exercises introduce essential Unix commands, file-system operations, and basic scripting.

### Shell00 — Unix Fundamentals

Core topics include:

- Navigating the file system.
- Managing files and directories.
- Understanding file permissions.
- Working with symbolic and hard links.
- Using commands such as `ls`, `find`, `chmod`, and `cat`.
- Understanding basic Git commands.

### Shell01 — Shell Scripting

Main topics include:

- Working with environment variables.
- Creating command pipelines.
- Processing text using Unix tools.
- Searching and filtering file content.
- Automating command-line operations.
- Combining commands to solve practical problems.

The repository also contains a separate `shell00/` directory.

## ⚙️ Installation & Setup

### Prerequisites

A Unix-like environment with:

- GCC or Clang
- Bash or another Unix-compatible Shell
- Git
- Make (for exercises that require it)

### Clone the Repository

```bash
git clone https://github.com/Azeroual0101/pool.git
cd pool
```

## 💻 Usage

### Running C Exercises

Navigate to a module:

```bash
cd C00
```

Explore its exercises:

```bash
ls
```

Compile a C exercise using a suitable test program:

```bash
cc -Wall -Wextra -Werror main.c ft_putchar.c -o program
```

Run the executable:

```bash
./program
```

The compilation command depends on the exercise. Many Piscine exercises implement individual functions and require a separate `main.c` for testing.

### Running Shell Exercises

Navigate to a Shell module:

```bash
cd Shell00
```

Inspect its contents:

```bash
ls -la
```

For executable Shell scripts:

```bash
bash script.sh
```

Some Shell exercises consist of commands, files, or permission configurations rather than executable scripts.

## 🧠 Key Concepts

### 1. C Programming Fundamentals

Understanding how C programs are structured, compiled, and executed, including variables, operators, loops, and conditional statements.

### 2. Pointers & Memory

Learning how memory addresses work, how pointers reference variables, and how data can be manipulated through memory.

### 3. Strings & Arrays

Implementing functions for string manipulation, searching, copying, comparison, and conversion.

### 4. Algorithms & Recursion

Solving computational problems using iterative and recursive techniques.

### 5. Dynamic Memory Allocation

Using `malloc()` and `free()` to manage dynamically allocated memory.

### 6. Unix & Shell

Navigating the file system, managing permissions, working with processes, and combining commands through pipelines.

### 7. Modular Programming

Organizing source code using header files, reusable functions, libraries, and Makefiles.

## 🧪 Testing & Debugging

C exercises can be compiled with strict warning flags:

```bash
cc -Wall -Wextra -Werror source.c main.c -o test
```

To check for memory leaks on Linux:

```bash
valgrind --leak-check=full ./test
```

To debug a program with GDB:

```bash
cc -g source.c main.c -o test
gdb ./test
```

Recommended testing practices include checking edge cases, validating function outputs, and ensuring proper memory management.

## 🎓 Learning Outcomes

The Piscine helps develop both technical and practical skills:

**Technical Skills**

- C programming fundamentals
- Pointer manipulation and memory management
- String and array processing
- Recursive algorithms
- Unix commands and Shell scripting
- Compilation and debugging
- Git and version control

**Soft Skills**

- Independent learning
- Problem-solving under time constraints
- Peer-to-peer learning
- Collaboration and code review
- Adaptability and perseverance

## 📚 Resources

- [42 School](https://42.fr/en/homepage/)
- [C Reference](https://en.cppreference.com/w/c)
- [Linux Manual Pages](https://man7.org/linux/man-pages/)
- [GNU Bash Manual](https://www.gnu.org/software/bash/manual/)
- [Git Documentation](https://git-scm.com/doc)

---

**1337 Coding School — 42 Network**

*An intensive introduction to programming, computer science fundamentals, and collaborative learning through hands-on challenges.*
