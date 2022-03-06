# Carbogen Literals
Strings, integers, decimals, arrays, etc.
I'll be representing the syntax with the syntax for creating `Elements.Meal.Edible(...)`s

| NAME                           | ID  | EXAMPLE   | DEFAULT      |
| -                              | -   | -         | -            |
| [Anything](#anything)          | any | *         | random 0 - 1 |
| [Integer](#integers)           | int | -42       | 0            |
| [Unsigned](#unsigned-integers) | unt | 42        | 0            |
| [Decimal](#decimals)           | dec | 24.59     | 0.0          |
| [Boolean](#booleans)           | bln | tru / fls | fls          |
| [String](#strings)             | str | 'abc'     | ''           |
| [Hexadecimal](#hexadecimals)   | hex | #2a       | #0           |

## Unsigned Integers

Test

## Strings

```
[
    ('"', ['\\"', !'"']*, '"'),
    ("'", ["\\'", !"'"]*, "'"),
    ('`', ['\\`', !'`']*, '`')
]
```

## More to come
