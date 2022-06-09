@x = common global i32 0
@pstr = private unnamed_addr constant [3 x i8] c"%d\0A"

define i32 @fib(i32 %n) {
entry:
  %n1 = alloca i32, align 4
  store i32 %n, i32* %n1, align 4
  %t = alloca [2 x i32], align 4
  store [2 x i32] zeroinitializer, [2 x i32]* %t, align 4
  %0 = load i32, i32* %n1, align 4
  %1 = icmp sle i32 %0, 1
  br i1 %1, label %when_true, label %else

when_true:                                        ; preds = %entry
  %2 = load i32, i32* %n1, align 4
  ret i32 %2

else:                                             ; preds = %entry
  %3 = load i32, i32* %n1, align 4
  %subtmp = sub i32 %3, 1
  %4 = call i32 @fib(i32 %subtmp)
  %5 = getelementptr [2 x i32], [2 x i32]* %t, i32 0, i32 0
  store i32 %4, i32* %5, align 4
  %6 = load i32, i32* %n1, align 4
  %subtmp2 = sub i32 %6, 2
  %7 = call i32 @fib(i32 %subtmp2)
  %8 = getelementptr [2 x i32], [2 x i32]* %t, i32 0, i32 1
  store i32 %7, i32* %8, align 4
  %9 = getelementptr [2 x i32], [2 x i32]* %t, i32 0, i32 0
  %10 = load i32, i32* %9, align 4
  %11 = getelementptr [2 x i32], [2 x i32]* %t, i32 0, i32 1
  %12 = load i32, i32* %11, align 4
  %addtmp = add i32 %10, %12
  ret i32 %addtmp

endcond:                                          ; No predecessors!
  ret i32 0
}

define void @main() {
entry:
  call void @INZ()
  store i32 0, i32* @x, align 4
  %0 = load i32, i32* @x, align 4
  %1 = icmp sle i32 %0, 20
  br i1 %1, label %forLoop, label %exitLoop

forLoop:                                          ; preds = %forLoop, %entry
  %2 = load i32, i32* @x, align 4
  %3 = call i32 @fib(i32 %2)
  call void @writei(i32 %3)
  %4 = load i32, i32* @x, align 4
  %addtmp = add i32 %4, 1
  store i32 %addtmp, i32* @x, align 4
  %5 = load i32, i32* @x, align 4
  %6 = icmp sle i32 %5, 20
  br i1 %6, label %forLoop, label %exitLoop

exitLoop:                                         ; preds = %forLoop, %entry
  ret void
}

declare i32 @putchar(i8)

declare i32 @printf(i8*, ...)

define void @writec(i32 %0) {
  %2 = trunc i32 %0 to i8
  %3 = call i32 @putchar(i8 %2)
  ret void
}

define void @writei(i32 %0) {
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @pstr, i32 0, i32 0), i32 %0)
  ret void
}

define void @INZ() {
  store i32 0, i32* @x, align 4
  ret void
}