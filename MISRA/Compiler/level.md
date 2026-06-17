Q1 What programming language has levels in the specification?
A1 by gemini
While many programming languages have different *versions* or *editions* (like C++11, C++20), the terminology of official **"Levels"** baked directly into the language specification is most famously associated with **SQL (Structured Query Language)** and **COBOL**.

Here is how "levels" are used in these language specifications:

## 1. SQL (Structured Query Language)

In older but foundational versions of the ANSI/ISO SQL standard (specifically **SQL-89** and **SQL-92**), the specification was explicitly divided into compliance levels. This allowed database vendors to claim standard compliance even if they hadn't implemented every single complex feature.

The **SQL-92** standard defined three main levels of compliance:

* **Entry SQL:** The bare minimum required to be considered standard-compliant. It mostly matched the previous SQL-89 standard.
* **Intermediate SQL:** Added major features like schema manipulation (`ALTER TABLE`), embedded SQL, and basic joins.
* **Full SQL:** The complete specification, including advanced features like deferred constraint checking and bit string data types.

> **Note:** In later versions (like SQL:1999 and onwards), the committee replaced "Levels" with a core set of features called **Core SQL**, supplemented by various optional packages.

---

## 2. COBOL (Common Business-Oriented Language)

COBOL is another language where the official ANSI/ISO standards traditionally divided the language into **modules**, and each module had specific **levels** (usually Level 1 and Level 2, or Level 0 for optional support).

For example, the **COBOL-85** standard split the language into:

* **Nucleus Module:** Had Level 1 (basic internal processing) and Level 2 (advanced processing).
* **Sequential I/O Module:** Had Level 1 and Level 2 for file handling capabilities.

A compiler vendor could choose to implement "Minimum ANSI COBOL" (all Level 1 modules) or "High ANSI COBOL" (all Level 2 modules).

### Data Division "Levels"

Separate from the specification compliance, COBOL also uses **Level numbers** (like `01`, `05`, `77`, `88`) inside the code itself to define the hierarchy of data structures.

---

## 3. Other Notable Mentions

### POSIX Shell (Shell Scripting)

The POSIX standard defines different levels of command language compliance for shells (like `sh`). A system can support the basic execution environment or the more advanced development utilities.

### HTML / CSS (Not strictly programming, but relevant)

If you look at web technologies, **CSS** famously uses **Levels** rather than versions (e.g., CSS Level 1, CSS Level 2, CSS Level 3). Because CSS is modular, different features progress through "Levels" independently now.
