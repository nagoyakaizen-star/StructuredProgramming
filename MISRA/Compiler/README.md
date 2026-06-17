https://github.com/PortableCC/pcc
https://en.wikipedia.org/wiki/Small-C


https://gemini.google.com/app/e824e918832c9185?hl=ja

Q1 Are they any compiler written pascal.
A1 bye Gemini
Yes, absolutely! In fact, Pascal has a rich history of being used to write its own compilers. When a compiler is written in the same language it compiles, it is called a **self-hosting compiler**.

Several major Pascal compilers are written in Pascal (or its modern extension, Object Pascal):

## 1. Free Pascal Compiler (FPC)

This is the most prominent and widely-used open-source Pascal compiler active today.

* **The Language:** It is completely written in Object Pascal.
* **How it started:** It began in 1993 when a student named Florian Paul Klämpfl wrote a 16-bit compiler using Turbo Pascal. Within two years, the compiler became advanced enough to compile its own source code, making it a 32-bit self-hosting compiler.

## 2. Delphi (Embarcadero)

Delphi is the commercial successor to the legendary Turbo Pascal. Its modern compiler (dcc32, etc.) and the entire Integrated Development Environment (IDE) framework are heavily written in Object Pascal.

## 3. Historical and Community Projects

* **Turbo Pascal (Early versions):** While the lightning-fast early versions of Turbo Pascal for DOS were famously hand-crafted by Anders Hejlsberg in Assembly to maximize performance, later iterations and dialects shifted toward using Pascal itself.
* **Pascal-P series (Pascal-P4 / Pascal-P5):** Historically, Niklaus Wirth (the creator of Pascal) and his team wrote a portable compiler called Pascal-P completely in Pascal. It generated an intermediate code (similar to Java bytecode) called P-Code. This was a massive milestone in computer science for bootstrapping compilers on new hardware.
* **Modern indie compilers:** Projects like **Blaise** (a modern, zero-legacy Object Pascal compiler) and **Pascual** are actively developed open-source compilers written in Pascal that compile themselves.

---

> **Fun Fact:** Because Pascal syntax is clean, highly structured, and strictly typed, it was historically the go-to language for teaching compiler design in universities.

*(Note: There are exceptions. For instance, **GNU Pascal (GPC)** was written in C/C++ because it was built as a frontend integrated directly into the GNU Compiler Collection).*

A1-2


Yes, absolutely! In fact, Pascal has a rich history of being used to write its own compilers—a process in computer science called **bootstrapping**.

Because Pascal is a highly structured and strongly typed language, it is actually excellent for writing compilers.

Here are the most notable and widely used Pascal compilers that were written in Pascal:

### 1. Free Pascal Compiler (FPC)

* **What it is:** A mature, open-source, professional Pascal compiler.
* **The Language:** It is written entirely in **Object Pascal** (and Free Pascal itself).
* **Why it matters:** It can cross-compile to an incredible number of architectures (Intel x86, AMD64, ARM, PowerPC, etc.) and operating systems (Windows, Linux, macOS, iOS, Android). Because it is written in Pascal, the FPC team uses an older version of FPC to compile the newer version's source code.

### 2. Turbo Pascal & Delphi

* **What they are:** Borland’s legendary IDEs and compilers that revolutionized software development in the 1980s and 90s.
* **The Language:** While the very early versions of Turbo Pascal were written in highly optimized Assembly language (to make them fit on a floppy disk and run blindingly fast), later versions and the modern **Embarcadero Delphi** compiler were rewritten largely in Object Pascal.

### 3. The Original Pascal-P Series (Pascal-P4 / Pascal-P5)

* **What it is:** In the 1970s, Niklaus Wirth (the creator of Pascal) and his team wanted to make Pascal portable to any computer. They wrote a compiler called **Pascal-P** entirely in Pascal.
* **How it worked:** Instead of compiling directly to machine code, it compiled Pascal into a hypothetical machine code called **P-Code** (similar to how Java compiles to bytecode today). To get Pascal running on a brand-new computer, a developer just had to write a tiny P-code interpreter in the machine's native language.

### 4. GNU Pascal (GPC)

* **What it is:** The Pascal frontend for the GNU Compiler Collection.
* **The Language:** While it hooks into the back-end of GCC (which is C/C++), the Pascal frontend parser itself was implemented in Pascal.

---

### How do you compile a compiler written in its own language?

If you want to compile the Free Pascal Compiler source code, you might wonder: *"If the compiler is written in Pascal, how do I compile it the very first time?"*

1. You download a pre-compiled, working **binary** of an older version of the compiler.
2. You use that older version to compile the new Pascal source code.
3. The result is a brand-new version of the compiler!
