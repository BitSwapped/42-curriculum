# 42 Self-Directed Curriculum

Two-person self-study program simulating the 42 school curriculum.

## Quick Reference — Where to Get Subjects (No Solutions)

| Source | What it has | Link |
|--------|-------------|------|
| **Ian-Orwel/42-Cursus-Subjects** | Subject PDFs only, English + French, organized by project | https://github.com/Ian-Orwel/42-Cursus-Subjects |
| **agavrel/42_Subjects** | Original 42 subjects archive | https://github.com/agavrel/42_Subjects |
| **0xTo/All-42-subject** | 10k+ subjects including piscine days | https://github.com/0xTo/All-42-subject |
| **42-Evals** | Official eval sheets (what reviewers check) | https://github.com/jpceia/42-evals |

> ⚠️ These repos contain **PDFs only** — no code. Ignore any solution files if present.

## Toolchain
- OS: Linux (Ubuntu recommended)
- Editor: Vim / Neovim
- Compiler: GCC/Clang with `-Wall -Wextra -Werror`
- Linter: [Norminette](https://github.com/42School/norminette)
- Memory: `valgrind`
- Debugger: `gdb`
- Build: `make`

## Progress Tracker

### Phase 0 — Fundamentals
- [ ] Linux filesystem, permissions, processes, signals
- [ ] Git (init, branch, merge, rebase, bisect)
- [ ] Bash scripting

### Phase 1 — Piscine
- [ ] Shell00
- [ ] Shell01
- [ ] C00 → C09
- [ ] Rush (BSQ)

### Common Core
- [ ] **Circle 0** — libft
- [ ] **Circle 1** — ft_printf, get_next_line, born2beroot *(after Exam Rank 02)*
- [ ] **Circle 2** — pipex, push_swap, minitalk, graphics *(after Exam Rank 03)*
- [ ] **Circle 3** — philosophers, minishell *(after Exam Rank 04)*
- [ ] **Circle 4** — net_practice, graphics, CPP 00-04 *(after Exam Rank 05)*
- [ ] **Circle 5** — CPP 05-09, ft_irc, inception *(after Exam Rank 06)*
- [ ] **Circle 6** — webserv, transcendence

## The Rules (Non-Negotiable)
1. **Never share code** between partners during solo projects
2. **Norminette must pass** on every C file
3. **No copy-paste** — if you can't explain every line, rewrite it
4. **Valgrind clean** — zero leaks on every submission
5. **Rushes are collaborative** (Fri 6PM → Sun 11PM, one shared repo)
6. **Exam mode**: no internet, no notes, terminal only

## Exam Schedule
Treat these as real exams. Schedule on a Friday. 3-4 hours, closed book.
- Exam Rank 02 → unlocks Circle 1
- Exam Rank 03 → unlocks Circle 2
- Exam Rank 04 → unlocks Circle 3
- Exam Rank 05 → unlocks Circle 4
- Exam Rank 06 → unlocks Circle 5

Use [examshell](https://github.com/JCluzet/42_EXAM) to simulate exam conditions locally.
