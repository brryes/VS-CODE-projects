section .data
    name        db 'John Doe', 10          ; 10 is newline character
    role        db 'Software Engineer', 10
    email       db 'john.doe@example.com', 10
    phone       db '(555)-555-1234', 10
    linkedin    db 'linkedin.com/in/johndoe', 10
    
    exp1_title  db 'Software Engineer at TechCorp', 10
    exp1_dur    db '2018 - 2023', 10
    exp1_desc   db 'Developed and optimized system-level software.', 10
    
    exp2_title  db 'Intern at CodeWorks', 10
    exp2_dur    db '2017 - 2018', 10
    exp2_desc   db 'Assisted in debugging and testing.', 10
    
    edu1_title  db 'B.S. in Computer Science', 10
    edu1_univ   db 'University of Technology', 10
    edu1_dur    db '2014 - 2018', 10

section .text
    global _start

_start:
    ; Output Name
    mov rax, 1          ; syscall: write
    mov rdi, 1          ; file descriptor: stdout
    mov rsi, name       ; pointer to string
    mov rdx, 8          ; length of name (including newline)
    syscall

    ; Output Role
    mov rsi, role
    mov rdx, 18         ; length of role (including newline)
    syscall

    ; Output Email
    mov rsi, email
    mov rdx, 21         ; length of email (including newline)
    syscall

    ; Output Phone
    mov rsi, phone
    mov rdx, 14         ; length of phone (including newline)
    syscall
    
    ; Output LinkedIn
    mov rsi, linkedin
    mov rdx, 25         ; length of LinkedIn (including newline)
    syscall

    ; Output Experience 1 Title
    mov rsi, exp1_title
    mov rdx, 29         ; length of experience 1 title (including newline)
    syscall

    ; Output Experience 1 Duration
    mov rsi, exp1_dur
    mov rdx, 9          ; length of experience 1 duration (including newline)
    syscall

    ; Output Experience 1 Description
    mov rsi, exp1_desc
    mov rdx, 47         ; length of experience 1 description (including newline)
    syscall

    ; Exit the process
    mov rax, 60         ; syscall: exit
    xor rdi, rdi        ; exit code: 0
    syscall
