# Carbogen Literals
Strings, integers, decimals, arrays, etc.
I'll be representing the syntax with the syntax for creating `Elements.Meal.Edible(...)`s

## Strings
```
[
    ('"', ['\\"', !'"']*, '"'),
    ("'", ["\\'", !"'"]*, "'"),
    ('`', ['\\`', !'`']*, '`')
]
```

## More to come
