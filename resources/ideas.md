Everything is case insensitive

carbogen:output, cbgn:out, output, out

random:integer,  rand:int

plugin:function, plug:fun

|s don't mean anything, just for aesthetic -
a space is for execution

```
hello = "Adam!";
out hello;  // "Adam!"
(
|   hello = "Beverly!";
|   out hello;  // "Beverly!"
|   hello2 = "Chris!";
|   out hello2;
);
out hello;  // "Beverly!"
out hello2;  // VariableError
```

Set a variable with
```
name = value;
```
eg
```
variable = "Hello, World!";
```

Declare a function with
```
name arg1 arg2 etc = (
|   ...
);
```
eg
```
fibonacci depth = (
|   sequence = [ ];
|   a = 0;
|   b = 1;
|   repeat depth (
|   |   c = ( a + b );
|   |   sequence = ( sequence + a );
|   |   a = b;
|   |   b = c;
|   );
|   sequence
);
```

Compression example:
```
fib d=(
|   s=[];
|   a,b=0,1;
|   rep++d(
|   |   s+=(a=(b=(a+b)))
|   )
);
```

Oneline
```
fib d=(s=[];a,b=0,1;rep++d(s+=(a=(b=(a+b)))));
```

Types, lists end in 's' - doubling number of types

| NAME        | EXAMPLE   |
| -           | -         |
| Integer     | -42       |
| Unsigned    | 42        |
| Decimal     | 24.59     |
| Boolean     | tru / fls |
| String      | 'abc'     |
| Hexadecimal | #2a       |
