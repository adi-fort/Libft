# LibFt - 42 Project

This repository contains my implementation of **LIBFT**, a personal library of C functions that I built as part of the **42 School** curriculum. The project consists of several functions commonly used in C programming, such as string manipulation, memory handling, and mathematical operations.

---

## 🚀 Project Overview

The goal of the **LIBFT** project is to:

- Implement fundamental C functions that are not part of the standard C library.
- Reinforce knowledge of data structures, algorithms, and memory management.
- Prepare for later projects at 42 School by providing a toolkit of commonly used functions.

---

## 🛠️ Key Features

The **LIBFT** library includes implementations of the following functions:

### String Manipulation

- `ft_strlen()`: Calculates the length of a string.
- `ft_strdup()`: Duplicates a string.
- `ft_strcpy()`: Copies one string to another.
- `ft_strcat()`: Concatenates two strings.
- `ft_strncmp()`: Compares two strings up to a specified number of characters.

### Memory Management

- `ft_memset()`: Fills a block of memory with a specified value.
- `ft_memcpy()`: Copies memory from one location to another.
- `ft_memmove()`: Moves a block of memory from one location to another, handling overlaps.
- `ft_bzero()`: Fills a block of memory with zeroes.

### Integer and Math Functions

- `ft_atoi()`: Converts a string to an integer.
- `ft_isdigit()`: Checks if a character is a digit.
- `ft_isalpha()`: Checks if a character is alphabetic.
- `ft_isalnum()`: Checks if a character is alphanumeric.

### Linked List Functions

- `ft_lstnew()`: Creates a new linked list node.
- `ft_lstadd_front()`: Adds a new node at the beginning of the list.
- `ft_lstsize()`: Returns the size of the list.
- `ft_lstlast()`: Returns the last node of the list.

### Other Utility Functions

- `ft_putchar_fd()`: Outputs a character to a file descriptor.
- `ft_putstr_fd()`: Outputs a string to a file descriptor.
- `ft_putnbr_fd()`: Outputs an integer to a file descriptor.

---

## ⚙️ Setup and Usage

### Prerequisites

To use this library, you'll need a C development environment with a compiler (such as **GCC**) installed on your system.

### Installation

1. Clone this repository:
   ```bash
   git clone https://github.com/adi-fort/libft.git
   cd libft

2. Compile the library:
  ```bash
  make


## 📂 File Structure

```plaintext
.
├── srcs/
│   ├── ft_atoi.c
│   ├── ft_memset.c
│   ├── ft_strlen.c
│   └── ...
├── includes/
│   └── libft.h
├── Makefile
└── README.md


📖 Learning Outcomes

Through this project, I gained hands-on experience with:

    Writing efficient and reusable C functions.
    Managing memory in C and understanding low-level operations.
    Understanding linked lists and pointer manipulation in C.
    Improving debugging skills and using Makefile for automation.

🌐 Resources

  [C Standard Library Documentation](https://en.cppreference.com/w/c) for understanding the standard C functions.
- [42 Curriculum](https://www.42.fr/en/curriculum/) to explore the full list of projects in the **42 School** program.


🔗 Contact

If you have questions or suggestions, feel free to reach out:

    Email: andreadifortunato@hotmail.it
    GitHub: adi-fort
