# Carbogen Literals
Strings, integers, decimals, arrays, etc.
I'll be representing the syntax with the syntax for creating `Elements.Meal.Edible(...)`s - keep in mind that this hasn't actually been created yet lmao.

| NAME                           | ID  | EXAMPLE   | DEFAULT      |
| -                              | -   | -         | -            |
| [Anything](#anything)          | any | *         | random 0 - 1 |
| [Integer](#integers)           | int | -42       | 0            |
| [Unsigned](#unsigned-integers) | unt | 42        | 0            |
| [Decimal](#decimals)           | dec | 24.59     | 0.0          |
| [Boolean](#booleans)           | bln | tru / fls | fls          |
| [String](#strings)             | str | 'abc'     | ''           |
| [Hexadecimal](#hexadecimals)   | hex | #2a       | #0           |

## Integers

```
('-'?, unt)
```

Signed integers are whole numbers that span between negative infinity and infinity.

## Unsigned Integers

```
[...'0123456789']+
```

Unsigned integers are whole numbers that span between 0 and infinity.

## Decimals

```
(unt, ".", unt)
```

Decimals are not necessarily whole numbers that span from negative infinity and infinity.

They are stored as two integers - a positive or negative one, and a positive one. Together they form a fraction that results in the decimal value.

## Booleans

```
[i'tru', i'true', i'fls', i'false']
```

Typical booleans - true or false.

## Strings

```
[
    ('"', ['\\"', !'"']*, '"'),
    ("'", ["\\'", !"'"]*, "'"),
    ('`', ['\\`', !'`']*, '`')
]
```

A group of characters. (Represented by ascii-encoded unsigned integers.)

## Hexadecimals

```
('-'?, '#', [...i'012456789abcdef']+)
```

A shorter way of writing signed integers, useful for creating colours and such
