# ft_printf

**Status:** Completed ✅

Custom implementation of the `printf` function in C as part of the 42 Warsaw curriculum.

---

## 📚 Project Overview

ft_printf is a project focused on recreating the behavior of the standard `printf` function.  
The objective is to understand variadic functions, formatted output, parsing, and low-level string handling in C.

This project helped me move beyond basic utility functions and work on a more complex program involving format specifiers and output control.

---

## 🎯 Objectives

- Recreate the core behavior of the standard `printf` function  
- Learn how variadic functions work in C  
- Parse format strings and handle multiple conversion specifiers  
- Build a structured and modular C project  

---

## 🧠 Skills Developed

- Variadic functions (`va_list`, `va_start`, `va_arg`, `va_end`)  
- Parsing and format handling  
- Character and string output  
- Hexadecimal and pointer formatting  
- Modular code organization and reusable helper functions  

---

## ⚙️ Technical Details

- Language: C  
- Standard: 42 Norm (norminette compliant)  
- Build system: `Makefile`  
- Output: static library `libftprintf.a`  

---

## 🔧 Usage

Clone the repository:

```bash
git clone https://github.com/BrunoKrysiak/ft_printf.git
cd ft_printf
```

Compile the project:

```bash
make
```

This will generate:

```bash
libftprintf.a
```

---

## 📦 Supported Conversions

This implementation supports the following format specifiers:

- `%c` — character  
- `%s` — string  
- `%p` — pointer  
- `%d` — signed decimal integer  
- `%i` — integer  
- `%u` — unsigned decimal integer  
- `%x` — lowercase hexadecimal  
- `%X` — uppercase hexadecimal  
- `%%` — percent sign  

---

## 📁 Project Structure

```text
ft_printf/
│
├── ft_printf.c
├── ft_printf.h
├── parse_type.c
├── print_char.c
├── print_string.c
├── print_number.c
├── print_unsigned.c
├── print_hex.c
├── print_pointer.c
├── Makefile
├── .gitignore
└── README.md
```

---

## 🧪 Testing

The project was tested with multiple format specifiers and edge cases to ensure correct output and behavior.

Examples of tested cases:
- strings and characters  
- signed and unsigned integers  
- hexadecimal output  
- null pointers and empty strings  
- literal percent signs  

---

## 🧠 What I Learned

This project helped me understand how formatted output works internally and how C handles variadic arguments.  
It also improved my ability to write modular code and manage more advanced parsing logic.

---

## ⭐ Final Thoughts

ft_printf was an important step forward in my C journey.  
It combined low-level programming, structured problem solving, and practical implementation of a well-known standard library function.
