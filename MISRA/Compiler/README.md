https://github.com/PortableCC/pcc
https://en.wikipedia.org/wiki/Small-C


https://gemini.google.com/app/e824e918832c9185?hl=ja
Q1 Are they any compiler written pascal.
A1 bye Gemini
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
