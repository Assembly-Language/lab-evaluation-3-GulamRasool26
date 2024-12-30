;Gulam Rasool-1159

INCLUDE Irvine32.inc
.data
;public asmfunc
msg db "assembly procedure end now",0


.code
asmfunc PROC p1:DWORD, p2:DWORD
   mov esi,p1           ;taking address of array
   mov edi,p2           ;taking address to return sum
   mov ecx,10           ;Counter for loop equal to array length
   mov ebx,0            ;To store Sum
   Sum:
        mov eax, [esi]          ;store first value of array in eax          
        test eax,80000000h      ;Checking negative value with highest bit 1
        Jz Positive             ;jump if positive value come and ZF=0
        Add ebx,[esi]           ;Increement if NEGATIVE OR skip if Positive
        Positive:               ;Label for positive Jump
         add esi,4              ;Increement for the next index
    Loop Sum

    mov [edi],ebx               ;To return Sum in C variable address
    call crlf
    mov edx,offset msg          ;displaying msg for ending Assembly proc
    call writestring
    
    ret
asmfunc ENDP
end