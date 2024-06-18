    .source Main.j
    .class public Main
    .super java/lang/Object
    .method public static main([Ljava/lang/String;)V
    .limit stack 100
    .limit locals 100
    getstatic java/lang/System/out Ljava/io/PrintStream;
    ldc 3
    ldc 4
    ldc 5
    ldc 8
    ineg
    iadd
    imul
    isub
    ldc 10
    ldc 7
    idiv
    isub
    invokevirtual java/io/PrintStream/print(I)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    invokevirtual java/io/PrintStream/println()V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    ldc 3
    ldc 4
    ldc 5
    ldc 8
    ineg
    iadd
    imul
    isub
    ldc 10
    ldc 7
    idiv
    isub
    ldc 4
    ineg
    ldc 3
    irem
    if_icmpgt greaterThanLabel0
    iconst_0
    goto endLable0
    greaterThanLable0:
    iconst_1
    endLabel0:
    iconst_1
    iconst_0
    iconst_0
    iconst_0
    iconst_0
    iand
    invokevirtual java/io/PrintStream/print(Z)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    invokevirtual java/io/PrintStream/println()V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    ldc 3.000000
    ldc 4.000000
    ldc 5.000000
    ldc 8.000000
    ineg
    iadd
    imul
    isub
    ldc 10.000000
    ldc 7.000000
    idiv
    isub
    invokevirtual java/io/PrintStream/print(F)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    invokevirtual java/io/PrintStream/println()V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    ldc 3.000000
    ldc 4.000000
    ldc 5.000000
    ldc 8.000000
    ineg
    iadd
    imul
    isub
    ldc 10.000000
    ldc 7.000000
    idiv
    isub
    ldc 4.000000
    ineg
    if_icmpgt greaterThanLabel0
    iconst_0
    goto endLable0
    greaterThanLable0:
    iconst_1
    endLabel0:
    iconst_1
    iconst_0
    iconst_0
    iconst_0
    iconst_0
    iand
    invokevirtual java/io/PrintStream/print(Z)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    invokevirtual java/io/PrintStream/println()V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    ldc 1000000
    ldc 9
    ldc 1
    imul
    iadd
    ldc 1
    isub
    ldc 2024
    iadd
    ldc 398
    ineg
    iadd
    ldc 88
    ldc 2
    irem
    ldc 0
    iadd
    ldc 8888889
    ldc 2
    irem
    ldc 0
    iadd
    invokevirtual java/io/PrintStream/print(I)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    invokevirtual java/io/PrintStream/println()V
    ldc 0
    return
    .end method
