Everything is case insensitive

carbogen:output, cbgn:out, output, out

random:integer,  rand:int

plugin:function, plug:fun

|s don't mean anything, just for aesthetic -
a space is for execution

```
str hello = "Adam!";
out hello;  // "Adam!"
(
|   str hello = "Beverly!";
|   out hello;  // "Beverly!"
);
out hello;  // "Adam!"
(
|   hello = "Chris!";
|   out hello;  // "Chris!"
);
out hello;  // "Chris!"
```

Set a variable with
```
type name = value;
```
eg
```
str variable = "Hello, World!";
```

Declare a function with
```
type name type arg1 type2 arg2 etc = (
|   ...
);
```
eg
```
ints fibonacci int depth = (
|   ints sequence = [ ];
|   int a = 0;
|   int b = 1;
|   repeat depth (
|   |   int c = ( a + b );
|   |   sequence = ( sequence + a );
|   |   a = b;
|   |   b = c;
|   );
|   sequence
);
```

Compression example:
```
ints fib int d=(
|   ints s;
|   int a,b=0,1;
|   rep ++d(
|   |   int c=(a+b);
|   |   s+=(a=(b=c))
|   )
);
```

Oneline
```
ints fib int d=(ints s;int a,b=0,1;rep ++d(int c=(a+b);s+=(a=(b=c))));
```

Types, lists end in 's' - doubling number of types

| NAME        | ID  | EXAMPLE   | DEFAULT      |
| -           | -   | -         | -            |
| Anything    | any | *         | random 0 - 1 |
| Integer     | int | -42       | 0            |
| Unsigned    | unt | 42        | 0            |
| Decimal     | dec | 24.59     | 0.0          |
| Boolean     | bln | tru / fls | fls          |
| String      | str | 'abc'     | ''           |
| Hexadecimal | hex | #2a       | #0           |
