@e = common global i8 0
@i = common global i8 0
@l = common global i8 0
@o = common global i8 0
@space = common global i8 0
@u = common global i8 0
@v = common global i8 0
@y = common global i8 0
@pstr = private unnamed_addr constant [5 x i8] c"%lld\0A"

define i8 @main() {
entry:
  call void @INZ()
  %0 = load i8, i8* @i, align 1
  %1 = call i8 @putchar(i8 %0)
  %2 = load i8, i8* @space, align 1
  %3 = call i8 @putchar(i8 %2)
  %4 = load i8, i8* @l, align 1
  %5 = call i8 @putchar(i8 %4)
  %6 = load i8, i8* @o, align 1
  %7 = call i8 @putchar(i8 %6)
  %8 = load i8, i8* @v, align 1
  %9 = call i8 @putchar(i8 %8)
  %10 = load i8, i8* @e, align 1
  %11 = call i8 @putchar(i8 %10)
  %12 = load i8, i8* @space, align 1
  %13 = call i8 @putchar(i8 %12)
  %14 = load i8, i8* @y, align 1
  %15 = call i8 @putchar(i8 %14)
  %16 = load i8, i8* @o, align 1
  %17 = call i8 @putchar(i8 %16)
  %18 = load i8, i8* @u, align 1
  %19 = call i8 @putchar(i8 %18)
  ret i8 0
}

declare i8 @putchar(i8)

define void @INZ() {
  store i8 69, i8* @e, align 1
  store i8 73, i8* @i, align 1
  store i8 76, i8* @l, align 1
  store i8 79, i8* @o, align 1
  store i8 32, i8* @space, align 1
  store i8 85, i8* @u, align 1
  store i8 86, i8* @v, align 1
  store i8 89, i8* @y, align 1
  ret void
}