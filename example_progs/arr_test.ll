; ModuleID = 'arr_test.cpp'
source_filename = "arr_test.cpp"
target datalayout = "e-m:w-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-windows-msvc19.29.30145"

@"?x@@3HA" = dso_local global i32 2, align 4

; Function Attrs: mustprogress noinline nounwind optnone uwtable
define dso_local void @"?aa@@YAXH@Z"(i32 noundef %x) #0 {
entry:
  %x.addr = alloca i32, align 4
  store i32 %x, ptr %x.addr, align 4
  %0 = load i32, ptr %x.addr, align 4
  %add = add nsw i32 20, %0
  store i32 %add, ptr %x.addr, align 4
  ret void
}

; Function Attrs: mustprogress noinline nounwind optnone uwtable
define dso_local void @"?bb@@YAXXZ"() #0 {
entry:
  %0 = load i32, ptr @"?x@@3HA", align 4
  call void @"?aa@@YAXH@Z"(i32 noundef %0)
  ret void
}

attributes #0 = { mustprogress noinline nounwind optnone uwtable "frame-pointer"="none" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }

!llvm.module.flags = !{!0, !1, !2}
!llvm.ident = !{!3}

!0 = !{i32 1, !"wchar_size", i32 2}
!1 = !{i32 7, !"PIC Level", i32 2}
!2 = !{i32 7, !"uwtable", i32 2}
!3 = !{!"clang version 15.0.0 (https://github.com/llvm/llvm-project.git 419e49621fb4b7cc2a46b09cd04020c083f7d64b)"}
