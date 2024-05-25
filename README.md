# c-explode

## Build and Run
```sh
$ make
```

## Example Output

This program turns a string, into an array of strings based on a delim character.

For example, it turns:

`"Hello I am Josh and I like tofu"` with a delim of `' '` 

into `["Hello", "I", "am", "Josh", "and", "I", "like", "tofu"]`

```sh
$ ./main
["Hello", "I", "am", "Josh", "and", "I", "like", "tofu"]
```

## Leaks
```sh
leaks --atExit -- ./main

...
(truncated)
...

Process 13952: 0 leaks for 0 total leaked bytes.
```
