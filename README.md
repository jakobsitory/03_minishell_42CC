# Minishell
The **Minishell** project is a challenge within the 42 School curriculum aimed at deepening students' understanding of shell scripting, process management, and Unix system calls in C. The goal is to create a simple shell that can execute commands, manage processes, and handle input/output redirections, similar to a basic Unix shell.

## **Task**

The task was to implement a simple shell program that can:

- Parse and execute basic shell commands.
- Handle input/output redirections (`<`, `>`).
- Implement pipes (`|`) for inter-process communication.
- Manage environment variables and their usage within commands.
- Support command history and basic line-editing capabilities.

**Key objectives included:**
- Designing a robust parser to interpret and execute user commands, handling various edge cases and error scenarios.
- Implementing key shell functionalities such as process management, piping, and redirection.
- Ensuring compliance with standard shell behavior, particularly in handling environment variables and built-in commands like `cd`, `echo`, `pwd`, `export`, `unset`, and `exit`.

## **Key Achievements**
- **Full Shell Implementation**: Successfully created a functional shell that supports execution of commands, pipelines, and I/O redirection, replicating the core functionalities of a Unix shell.
- **Robust Parsing and Error Handling**: Developed a parser capable of handling complex command structures, with comprehensive error detection and handling to ensure stability.
- **Process and Signal Management**: Implemented effective process management and signal handling, ensuring smooth operation and responsiveness, even during interrupt signals (e.g., `Ctrl+C`, `Ctrl+D`).

## Installation

To install the Project, follow these steps:
1. Clone the repository: **`git clone git@github.com:jakobsitory/03_minishell_42CC.git`**
2. Navigate to the project directory: **`cd 03_minishell_42CC`**
3. Build the project: **`make`**

## **Usage**

Once compiled, you can start the shell by running:

```bash
./minishell
```

**Example Commands**

```bash
ls -l | grep minishell > output.txt
cat < output.txt
export PATH=$PATH:/my/custom/path
echo $PATH
```
