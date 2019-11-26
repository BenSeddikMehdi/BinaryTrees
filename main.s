	.file	"main.c"
	.globl	_lineOfNode
	.bss
	.align 4
_lineOfNode:
	.space 4
	.text
	.globl	_insertNewData
	.def	_insertNewData;	.scl	2;	.type	32;	.endef
_insertNewData:
LFB14:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	8(%ebp), %eax
	movl	(%eax), %eax
	testl	%eax, %eax
	jne	L2
	movl	8(%ebp), %eax
	movl	12(%ebp), %edx
	movl	%edx, (%eax)
	jmp	L8
L2:
	movl	8(%ebp), %eax
	movl	(%eax), %eax
	cmpl	12(%ebp), %eax
	jle	L4
	movl	8(%ebp), %eax
	movl	4(%eax), %eax
	testl	%eax, %eax
	je	L5
	movl	8(%ebp), %eax
	movl	4(%eax), %eax
	movl	12(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	_insertNewData
	jmp	L8
L5:
	movl	$12, (%esp)
	call	_malloc
	movl	%eax, %edx
	movl	8(%ebp), %eax
	movl	%edx, 4(%eax)
	movl	8(%ebp), %eax
	movl	4(%eax), %eax
	movl	12(%ebp), %edx
	movl	%edx, (%eax)
	movl	8(%ebp), %eax
	movl	4(%eax), %eax
	movl	$0, 4(%eax)
	movl	8(%ebp), %eax
	movl	4(%eax), %eax
	movl	$0, 8(%eax)
	jmp	L8
L4:
	movl	8(%ebp), %eax
	movl	8(%eax), %eax
	testl	%eax, %eax
	je	L7
	movl	8(%ebp), %eax
	movl	8(%eax), %eax
	movl	12(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	_insertNewData
	jmp	L8
L7:
	movl	$12, (%esp)
	call	_malloc
	movl	%eax, %edx
	movl	8(%ebp), %eax
	movl	%edx, 8(%eax)
	movl	8(%ebp), %eax
	movl	8(%eax), %eax
	movl	12(%ebp), %edx
	movl	%edx, (%eax)
	movl	8(%ebp), %eax
	movl	8(%eax), %eax
	movl	$0, 4(%eax)
	movl	8(%ebp), %eax
	movl	8(%eax), %eax
	movl	$0, 8(%eax)
L8:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE14:
	.section .rdata,"dr"
LC0:
	.ascii "%d\12\0"
	.text
	.globl	_printDataInOrder
	.def	_printDataInOrder;	.scl	2;	.type	32;	.endef
_printDataInOrder:
LFB15:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	cmpl	$0, 8(%ebp)
	je	L13
	movl	8(%ebp), %eax
	movl	4(%eax), %eax
	testl	%eax, %eax
	je	L12
	movl	8(%ebp), %eax
	movl	4(%eax), %eax
	movl	%eax, (%esp)
	call	_printDataInOrder
L12:
	movl	8(%ebp), %eax
	movl	(%eax), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	movl	8(%ebp), %eax
	movl	8(%eax), %eax
	testl	%eax, %eax
	je	L9
	movl	8(%ebp), %eax
	movl	8(%eax), %eax
	movl	%eax, (%esp)
	call	_printDataInOrder
	jmp	L9
L13:
	nop
L9:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE15:
	.globl	_searchValue
	.def	_searchValue;	.scl	2;	.type	32;	.endef
_searchValue:
LFB16:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	8(%ebp), %eax
	movl	(%eax), %eax
	cmpl	12(%ebp), %eax
	jne	L15
	movl	_lineOfNode, %eax
	addl	$1, %eax
	movl	%eax, _lineOfNode
	movl	_lineOfNode, %eax
	jmp	L16
L15:
	movl	8(%ebp), %eax
	movl	(%eax), %eax
	cmpl	12(%ebp), %eax
	jle	L17
	movl	8(%ebp), %eax
	movl	4(%eax), %eax
	testl	%eax, %eax
	jne	L18
	movl	$0, _lineOfNode
	movl	$0, %eax
	jmp	L16
L18:
	movl	_lineOfNode, %eax
	addl	$1, %eax
	movl	%eax, _lineOfNode
	movl	8(%ebp), %eax
	movl	4(%eax), %eax
	movl	12(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	_searchValue
	jmp	L19
L17:
	movl	8(%ebp), %eax
	movl	8(%eax), %eax
	testl	%eax, %eax
	jne	L20
	movl	$0, _lineOfNode
	movl	$0, %eax
	jmp	L16
L20:
	movl	_lineOfNode, %eax
	addl	$1, %eax
	movl	%eax, _lineOfNode
	movl	8(%ebp), %eax
	movl	8(%eax), %eax
	movl	12(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	_searchValue
L19:
	movl	_lineOfNode, %eax
L16:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE16:
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 4
LC1:
	.ascii "find the value of 6 at the line Node %d\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB17:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$0, 28(%esp)
	movl	$12, (%esp)
	call	_malloc
	movl	%eax, 24(%esp)
	movl	24(%esp), %eax
	movl	$0, (%eax)
	movl	24(%esp), %eax
	movl	$0, 4(%eax)
	movl	24(%esp), %eax
	movl	$0, 8(%eax)
	movl	$5, 4(%esp)
	movl	24(%esp), %eax
	movl	%eax, (%esp)
	call	_insertNewData
	movl	$4, 4(%esp)
	movl	24(%esp), %eax
	movl	%eax, (%esp)
	call	_insertNewData
	movl	$11, 4(%esp)
	movl	24(%esp), %eax
	movl	%eax, (%esp)
	call	_insertNewData
	movl	$6, 4(%esp)
	movl	24(%esp), %eax
	movl	%eax, (%esp)
	call	_insertNewData
	movl	$7, 4(%esp)
	movl	24(%esp), %eax
	movl	%eax, (%esp)
	call	_insertNewData
	movl	$7, 4(%esp)
	movl	24(%esp), %eax
	movl	%eax, (%esp)
	call	_searchValue
	movl	%eax, 28(%esp)
	movl	24(%esp), %eax
	movl	%eax, (%esp)
	call	_printDataInOrder
	movl	24(%esp), %eax
	movl	%eax, (%esp)
	call	_free
	movl	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE17:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_malloc;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_free;	.scl	2;	.type	32;	.endef
