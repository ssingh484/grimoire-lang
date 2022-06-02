	.text
	.def	@feat.00;
	.scl	3;
	.type	0;
	.endef
	.globl	@feat.00
.set @feat.00, 0
	.file	"arr_test.cpp"
	.def	"?aa@@YAXH@Z";
	.scl	2;
	.type	32;
	.endef
	.globl	"?aa@@YAXH@Z"                   # -- Begin function ?aa@@YAXH@Z
	.p2align	4, 0x90
"?aa@@YAXH@Z":                          # @"?aa@@YAXH@Z"
.seh_proc "?aa@@YAXH@Z"
# %bb.0:                                # %entry
	pushq	%rax
	.seh_stackalloc 8
	.seh_endprologue
	movl	%ecx, 4(%rsp)
	movl	4(%rsp), %eax
	addl	$20, %eax
	movl	%eax, 4(%rsp)
	popq	%rax
	retq
	.seh_endproc
                                        # -- End function
	.def	"?bb@@YAXXZ";
	.scl	2;
	.type	32;
	.endef
	.globl	"?bb@@YAXXZ"                    # -- Begin function ?bb@@YAXXZ
	.p2align	4, 0x90
"?bb@@YAXXZ":                           # @"?bb@@YAXXZ"
.seh_proc "?bb@@YAXXZ"
# %bb.0:                                # %entry
	subq	$40, %rsp
	.seh_stackalloc 40
	.seh_endprologue
	movl	"?x@@3HA"(%rip), %ecx
	callq	"?aa@@YAXH@Z"
	nop
	addq	$40, %rsp
	retq
	.seh_endproc
                                        # -- End function
	.data
	.globl	"?x@@3HA"                       # @"?x@@3HA"
	.p2align	2
"?x@@3HA":
	.long	2                               # 0x2

