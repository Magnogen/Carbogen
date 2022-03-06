# Carbogen
A Lisp-like language that compiles to JavaScript and makes use of scopes (known as "bubbles"). 

## Syntax
```
output "Hello, World!";
```
- Comments can be defined with `//...` or `/*...*/`.
- Variables are pseudo-typed, and are created with the name of their type (`integer` `int`, `string` `str`, `boolean` `bln`, etc)

  Pseudo-typed as in any value the variable holds will automatically be converted to its type. 
- Functions are called with the name of the function, a space, and then arguments separated by spaces.
- Every line produces a "releasable" value. Even variable declarations. Everything.
- Lines end with a semicolon.
- Bubbles (scopes) are surrounded by `(` and `)`. The last line of the bubbles determines what is released when it "pops".

  Not all bubbles have to be executed.
- Functions, variables and namespaces are case-insensitive.
- Every variable and function belong to a namespace. By default this is `carbogen` (`cbgn`) for vanilla ones, and `project` (`proj`) for custom ones.
- The vanilla namespace can be shortened to 4 letters, functions can also be shortened, but usually to 3.

## Examples

A Truth Machine.
```
int input = (inp); // store input from user in variable, input
if (input == 0) (
    out "0";
);
if (input == 1) (
    while (true) (
        out "1";
    );
);
```

Swap two variables.

Works on the premise that updating a variable releases its original value.
```
int a = (42);
int b = (69);

a = (b = a); // the magic

out a; // 69
out b; // 42
```
