# Libft - 42 School

### 🏆 Score: **125/100** (+25 for bonus)

## 📖 About the Project
Libft is a custom implementation of standard C library functions, built from scratch. It is the starting point for learning the fundamentals of C programming, memory management, function implementation, and coding style.

🛠️ *Note: This version of Libft includes additional functions like* `ft_printf` *and* `get_next_line` *that were not part of the initial subject.*


## 📚 What I Learned

- **Memory Management**: Deep understanding of allocation, deallocation, and manipulation
- **String Manipulation**: Comprehensive knowledge of string operations
- **Data Structures**: Implementation of linked lists and associated operations
- **Coding Standards**: Adherence to the 42 Norm and clean code principles

## 🚀 Usage

To compile and use **libft**, follow these steps:

### 1️⃣ Clone the Repository

```bash
git clone https://github.com/t-ecker/42-Libft.git
cd libft
```

### 2️⃣ Compile the Library

```bash
make extra
```

This generates **libft.a**, the static library containing all implemented functions.

### 3️⃣ Use it in Your Project

To use **libft** in your own C projects, add the following flags when compiling:

```bash
-L path/to/libft.a -I path/to/libft.h
```

### 4️⃣ Include the Header

Make sure to include the library header in your source files:

```c
#include "libft.h"
```

## 🔗 Projects Using Libft

Libft is a core library that serves as a foundation for several projects at 42, including:

- [**ft\_printf**](https://github.com/t-ecker/42-ft_printf) (custom printf implementation)
- [**get\_next\_line**](https://github.com/t-ecker/42-get_next_line) (efficient file reading function)
- [**push\_swap**](https://github.com/t-ecker/42-push_swap) (sorting algorithm project)
- [**fdf**](https://github.com/t-ecker/42-fdf) (wireframe model visualization with a 3D view of the data)
- [**minishell**](https://github.com/t-ecker/42-minishell) (basic shell implementation)
- [**cub3d**](https://github.com/t-ecker/42-cub3d) (simple 3D game engine using raycasting)

## 🏁 Conclusion

Libft is a foundational project at 42 that strengthens core C programming skills. It serves as a great resource for future projects requiring basic utility functions.

