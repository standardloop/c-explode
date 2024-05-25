# c-explode

This program turns a string into an array of strings based on a delim character.

This is similiar to `split()` in python or `explode()` in php.

I think explode is a cooler name so I used it for this.

## Build and Run
```sh
$ make
$ ./main <INPUT_STR> <DELIM>
```

## Example Output

```sh
$ make
$ ./main "hello I am josh" " "
["hello", "I", "am", "josh"]

$ ./main "hello,I,am,josh" ","
["hello", "I", "am", "josh"]
```

## Leaks (macOS)
```sh
$ leaks --atExit -- ./main "hello I am josh" " "

...
(truncated)
...

Process 13952: 0 leaks for 0 total leaked bytes.
```
