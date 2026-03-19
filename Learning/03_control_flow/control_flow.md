# Control Flow: Making Decisions and Looping

By default, C++ executes code line by line, from top to bottom. Control flow statements allow you to change that path by skipping lines, repeating lines, or choosing between different blocks of code.

### 1. Conditionals (If / Else)
Conditionals evaluate a boolean expression (true or false). If true, the code block executes.



Operators you will use:
* `==` (Equal to) — *Note: `int a = 5` sets the value. `a == 5` asks a question.*
* `!=` (Not equal to)
* `>`, `<`, `>=`, `<=` (Greater/Less than)
* `&&` (AND - both must be true)
* `||` (OR - one must be true)

### 2. The Switch Statement
When you have a single variable that can be many specific values, `switch` is often cleaner than a long chain of `else if` statements. It's perfect for handling keyboard inputs or game states (Menu, Playing, Game Over).

### 3. Loops (While / For)
Loops repeat a block of code as long as a condition is true.
* **`while` loop:** Best when you don't know exactly how many times the loop will run (e.g., "while the player is alive").
* **`for` loop:** Best when you know exactly how many times to repeat (e.g., "give 5 coins to the player").