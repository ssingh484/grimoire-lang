@n = common global i8 0
@t1 = common global i8 0
@t2 = common global i8 0
@x = common global i8 0
@pstr = private unnamed_addr constant [5 x i8] c"%lld\0A"

define i8 @fib(i8 %n) {
entry:
  %0 = load i8, i8* @n, align 1
  %1 = icmp sle i8 %0, 1
  br i1 %1, label %when_true, label %else

when_true:                                        ; preds = %entry
  %2 = load i8, i8* @n, align 1
  ret i8 %2

else:                                             ; preds = %entry
  %3 = load i8, i8* @n, align 1
  %subtmp = sub i8 %3, 1
  store i8 %subtmp, i8* @n, align 1
  %4 = call i8 @fib(i8 %subtmp)
  store i8 %4, i8* @t1, align 1
  %5 = load i8, i8* @n, align 1
  %subtmp1 = sub i8 %5, 2
  store i8 %subtmp1, i8* @n, align 1
  %6 = call i8 @fib(i8 %subtmp1)
  store i8 %6, i8* @t2, align 1
  %7 = load i8, i8* @t1, align 1
  %8 = load i8, i8* @t2, align 1
  %addtmp = add i8 %7, %8
  ret i8 %addtmp

endcond:                                          ; No predecessors!
  ret i8 0
}

define void @main() {
entry:
  call void @INZ()
  store i8 12, i8* @x, align 1
  %0 = load i8, i8* @x, align 1
  store i8 %0, i8* @n, align 1
  %1 = call i8 @fib(i8 %0)
  store i8 %1, i8* @x, align 1
  %2 = load i8, i8* @x, align 1
  %3 = call i8 @putchar(i8 %2)
  ret void
}

declare i8 @putchar(i8)

define void @INZ() {
  store i8 0, i8* @t1, align 1
  store i8 0, i8* @t2, align 1
  store i8 0, i8* @x, align 1
  ret void
}