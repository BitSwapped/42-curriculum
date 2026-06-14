# Peer Evaluation Checklist

Use this for every project review (both directions).

## 1. Norminette
```
norminette *.c *.h
```
- [ ] Zero norm errors

## 2. Compilation
```
make && make clean && make fclean && make re
```
- [ ] Compiles cleanly with -Wall -Wextra -Werror
- [ ] No warnings

## 3. Functional Testing
- [ ] All mandatory functions work as expected
- [ ] Edge cases tested (empty input, NULL, INT_MAX, INT_MIN, etc.)

## 4. Memory (for projects with malloc)
```
valgrind --leak-check=full --show-leak-kinds=all ./program
```
- [ ] Zero leaks
- [ ] No invalid reads/writes

## 5. Oral Defense — ask these:
- Explain your algorithm. Walk me through it.
- What is the time complexity? Space complexity?
- Why did you make this design choice?
- What does this specific line do?
- What happens if I pass NULL here?
- How would you improve this if you had more time?

## 6. Subject Compliance
- [ ] All required functions present and named correctly
- [ ] No forbidden functions used
- [ ] Follows all constraints in the PDF
