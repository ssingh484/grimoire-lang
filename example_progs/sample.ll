@a = common global i8 0
@arr_test = common global [10 x i8] zeroinitializer
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
  store i8 %0, i8* @a, align 1
  call void @wakanda(i8 %0)
  %1 = load i8, i8* @i, align 1
  %2 = call i8 @putchar(i8 %1)
  %3 = load i8, i8* @space, align 1
  %4 = call i8 @putchar(i8 %3)
  %5 = load i8, i8* @l, align 1
  %6 = call i8 @putchar(i8 %5)
  %7 = load i8, i8* @o, align 1
  %8 = call i8 @putchar(i8 %7)
  %9 = load i8, i8* @v, align 1
  %10 = call i8 @putchar(i8 %9)
  %11 = load i8, i8* @e, align 1
  %12 = call i8 @putchar(i8 %11)
  %13 = load i8, i8* @space, align 1
  %14 = call i8 @putchar(i8 %13)
  %15 = load i8, i8* @y, align 1
  %16 = call i8 @putchar(i8 %15)
  %17 = load i8, i8* @o, align 1
  %18 = call i8 @putchar(i8 %17)
  %19 = load i8, i8* @u, align 1
  %20 = call i8 @putchar(i8 %19)
  ret i8 0
}

define void @wakanda(i8 %a) {
entry:
  %0 = load i8, i8* @a, align 1
  %1 = call i8 @putchar(i8 %0)
  ret void
}

declare i8 @putchar(i8)

define void @INZ() {
  store [10 x i8] c"UUUUUUUUUU", [10 x i8]* @arr_test, align 1
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