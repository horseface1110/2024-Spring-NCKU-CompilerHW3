    .source Main.j
    .class public Main
    .super java/lang/Object
    .method public static main([Ljava/lang/String;)V
    .limit stack 100
    .limit locals 100
    ldc 0
    istore 1 ; a
    ldc 0
    istore 2 ; b
    iload 1 ; a
    iload 2 ; b
    iadd
    istore 1 ; a
    ldc 3.140000
    fstore 3 ; c
    fload 3 ; c
    f2i
    ldc 2024.393433
    f2i
    iadd
    istore 4 ; d
    getstatic java/lang/System/out Ljava/io/PrintStream;
    iload 4 ; d
    invokevirtual java/io/PrintStream/print(I)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    invokevirtual java/io/PrintStream/println()V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    iload 1 ; a
    invokevirtual java/io/PrintStream/print(I)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    invokevirtual java/io/PrintStream/println()V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    iload 2 ; b
    invokevirtual java/io/PrintStream/print(I)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    invokevirtual java/io/PrintStream/println()V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    fload 3 ; c
    invokevirtual java/io/PrintStream/print(F)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    invokevirtual java/io/PrintStream/println()V
    return
    .end method
