# Push Swap 🔄

This project is an algorithmic challenge that aims to sort two stacks with the minimum number of operations.

---
> 🚧 **Status:** Completed

## About The Project 📝

Push Swap is a 42 School project that requires us to sort a given array of numbers using two stacks (A and B) with a specific set of operations. The goal is to achieve this sorting with the minimum number of moves possible.

### Available Operations 🛠️

- `sa` : swap the first 2 elements at the top of stack a
- `sb` : swap the first 2 elements at the top of stack b
- `ss` : sa and sb at the same time
- `pa` : take the first element at the top of b and put it at the top of a
- `pb` : take the first element at the top of a and put it at the top of b
- `ra` : rotate all elements of stack a up by 1
- `rb` : rotate all elements of stack b up by 1
- `rr` : ra and rb at the same time
- `rra` : rotate all elements of stack a down by 1
- `rrb` : rotate all elements of stack b down by 1
- `rrr` : rra and rrb at the same time

## Usage 💻

```bash
make
./push_swap 5 2 3 1 4
```

### Building 🔨

```bash
make        # Compile the program
make clean  # Remove object files
make fclean # Remove all compiled files
make re     # Recompile everything
```

## Algorithm 🧮

The program implements a radix sort algorithm to sort the numbers. Each number is first indexed, then converted to binary format, and sorted based on their bits.

## Test Results 📊

- For 3 numbers: 2-3 moves
- For 5 numbers: 10-12 moves
- For 100 numbers: ~700 moves
- For 500 numbers: ~5500 moves
