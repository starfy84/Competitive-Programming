; libc
extern printf
extern scanf
section .data
sf db "%d",0
inpa times 4 db 0
inpb times 4 db 0
inpc times 4 db 0
section .text
global main
main:

push inpa
push sf
call scanf
add esp,8

push inpb
push sf
call scanf
add esp,8

push inpc
push sf
call scanf
add esp,8


mov eax,dword[inpa]
add eax,dword[inpb]
add eax,dword[inpc]
mov ecx,3
xor edx,edx
div ecx

push eax
push sf
call printf
add esp,8
xor eax,eax

ret