# Carbogen

A Lisp-like language that compiles to JavaScript and makes use of scopes (known as "bubbles"). 

## Syntax

```
output "Hello, World!";
```

- Every line produces a "releasable" value. Even variable declarations. Everything.

- Lines end with a semicolon. 

- Bubbles (scopes) are collections of lines, and are encased with `()`s. The last line of the bubbles determines what is returned when it "pops".

  Not all bubbles have to be executed. This can lead to loops and conditionals.

- Functions, variables and namespaces are case-insensitive.

- Every function and variable belong to a namespace.
  
  By default, this is `carbogen` (`cbgn`) for vanilla ones, and `project` (`proj`) for custom ones.
  
  Plugins can be created with their own namespace. This is to help with differentiating functions, especially considering functions usually have 3-letter proxies.

- Functions are called with the name of the function, a space, and then arguments separated by spaces.
  (This is where it's like Lisp!)

- The vanilla namespace can be shortened to 4 letters and functions can be shortened - usually to 3 letters. 

- Variables are pseudo-typed, and are created with the name of their type. (`integer` `int`, `string` `str`, `boolean` `bln`, etc.)

  Pseudo-typed as in any value the variable holds will automatically be converted to its type.  

- Comments can be defined with `//...` or `/*...*/`.

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
