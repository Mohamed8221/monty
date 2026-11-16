# monty

An interpreter for Monty ByteCode files, written in C for the ALX Software Engineering program. Monty is a stack-based scripting language: each line of a `.m` file holds one opcode that operates on a stack of integers.

**Status: work in progress.** The stack and its operations are implemented. The loop that reads a bytecode file and dispatches each line to its opcode is not written yet, so the program currently opens the file and exits.

## Build

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o monty
```

## Usage

```bash
./monty file.m
```

## Implemented stack operations

The stack is a doubly linked list (`stack_t` in `monty.h`).

| Opcode | Function | Behavior |
|---|---|---|
| `push <int>` | `push` | Push an integer onto the stack |
| `pall` | `pall` | Print every value, top first |
| `pint` | `pint` | Print the top value |
| `pop` | `pop` | Remove the top value |
| `swap` | `swap` | Swap the top two values |
| `add` | `add` | Replace the top two values with their sum |
| `sub` | `sub` | Subtract the top value from the second |
| `nop` | `nop` | Do nothing |

Errors follow the Monty convention, for example `L<line>: can't pop an empty stack`.

## Example bytecode

```
push 1
push 2
push 3
pall
```

Expected output once the interpreter loop is in place:

```
3
2
1
```

## To do

- Read the file line by line, tokenize, and dispatch through an `instruction_t` table
- Report `L<line>: unknown instruction <opcode>` and `L<line>: usage: push integer`
- Free the stack on exit
