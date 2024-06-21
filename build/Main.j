    .source Main.j
    .class public Main
    .super java/lang/Object
    .method public static main([Ljava/lang/String;)V
    .limit stack 100
    .limit locals 100
    ldc 3
    istore 1 ; x
    ldc 3.140000
    fstore 2 ; y
    iload 1 ; x
    fload 2 ; y
    f2i
    iadd
    istore 3 ; z1
    iload 1 ; x
    i2f
    fadd
    istore 4 ; z2
    getstatic java/lang/System/out Ljava/io/PrintStream;
    iload 3 ; z1
    invokevirtual java/io/PrintStream/print(I)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    ldc " "
    invokevirtual java/io/PrintStream/print(Ljava/lang/String;)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    iload 4 ; z2
    invokevirtual java/io/PrintStream/print(I)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    invokevirtual java/io/PrintStream/println()V
    iload 1 ; x
    ldc 6.280000
    f2i
    iadd
    istore 3 ; z1
    ldc 6
    i2f
    fload 2 ; y
    fadd
    istore 4 ; z2
    getstatic java/lang/System/out Ljava/io/PrintStream;
    iload 3 ; z1
    invokevirtual java/io/PrintStream/print(I)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    invokevirtual java/io/PrintStream/println()V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    iload 4 ; z2
    invokevirtual java/io/PrintStream/print(I)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    invokevirtual java/io/PrintStream/println()V
    ldc 0
    return
    .end method
