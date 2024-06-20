    .source Main.j
    .class public Main
    .super java/lang/Object
    .method public static main([Ljava/lang/String;)V
    .limit stack 100
    .limit locals 100
    iload 1 ; a
    ldc 243
    iconst_m1
    ixor
    ldc 15
    iand
    istore 1 ; a
    iload 2 ; b
    iload 1 ; a
    ldc 1
    ishr
    istore 2 ; b
    iload 3 ; c
    iload 1 ; a
    istore 3 ; c
    iload 4 ; d
    iload 2 ; b
    ldc 9
    istore 4 ; d
    iload 5 ; e
    iload 2 ; b
    istore 5 ; e
    iload 1 ; a
    iload 1 ; a
    iadd
    istore 1 ; a
    iload 2 ; b
    iload 2 ; b
    iadd
    istore 2 ; b
    iload 3 ; c
    iload 3 ; c
    idiv
    istore 3 ; c
    getstatic java/lang/System/out Ljava/io/PrintStream;
    iload 1 ; a
    invokevirtual java/io/PrintStream/print(I)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    ldc " "
    invokevirtual java/io/PrintStream/print(Ljava/lang/String;)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    iload 2 ; b
    invokevirtual java/io/PrintStream/print(I)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    ldc " "
    invokevirtual java/io/PrintStream/print(Ljava/lang/String;)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    iload 3 ; c
    invokevirtual java/io/PrintStream/print(I)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    ldc " "
    invokevirtual java/io/PrintStream/print(Ljava/lang/String;)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    iload 4 ; d
    invokevirtual java/io/PrintStream/print(I)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    ldc " "
    invokevirtual java/io/PrintStream/print(Ljava/lang/String;)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    iload 5 ; e
    invokevirtual java/io/PrintStream/print(I)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    invokevirtual java/io/PrintStream/println()V
    iload 5 ; e
    ldc 100
    ldc 255
    istore 5 ; e
    iload 5 ; e
    ldc 2
    iadd
    istore 5 ; e
    getstatic java/lang/System/out Ljava/io/PrintStream;
    iload 5 ; e
    invokevirtual java/io/PrintStream/print(I)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    invokevirtual java/io/PrintStream/println()V
    iload 5 ; e
    ldc 4
    iadd
    istore 5 ; e
    getstatic java/lang/System/out Ljava/io/PrintStream;
    iload 5 ; e
    invokevirtual java/io/PrintStream/print(I)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    invokevirtual java/io/PrintStream/println()V
    return
    .end method
