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
    goto endLabel0
    greaterThanLabel0:
    iconst_1
    endLabel0:
    iconst_1
    iconst_1
    ixor
    iconst_0
    iconst_1
    ixor
    iconst_1
    ixor
    iand
    ior
    invokevirtual java/io/PrintStream/print(Z)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    invokevirtual java/io/PrintStream/println()V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    ldc 3.000000
    ldc 4.000000
    ldc 5.000000
    ldc 8.000000
    fneg
    fadd
    fmul
    fsub
    ldc 10.000000
    ldc 7.000000
    fdiv
    fsub
    invokevirtual java/io/PrintStream/print(F)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    invokevirtual java/io/PrintStream/println()V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    ldc 3.000000
    ldc 4.000000
    ldc 5.000000
    ldc 8.000000
    fneg
    fadd
    fmul
    fsub
    ldc 10.000000
    ldc 7.000000
    fdiv
    fsub
    ldc 4.000000
    fneg
    fcmpg
    ifgt greaterThanLabel1
    iconst_0
    goto endLabel1
    greaterThanLabel1:
    iconst_1
    endLabel1:
    iconst_1
    iconst_1
    ixor
    iconst_0
    iconst_1
    ixor
    iconst_1
    ixor
    iand
    ior
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
    if_icmpne notEqualToLabel2
    iconst_0
    goto endLabel2
    notEqualToLabel2:
    iconst_1
    endLabel2:
    iadd
    ldc 8888889
    ldc 2
    irem
    ldc 0
    if_icmpne notEqualToLabel3
    iconst_0
    goto endLabel3
    notEqualToLabel3:
    iconst_1
    endLabel3:
    iadd
    invokevirtual java/io/PrintStream/print(I)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    invokevirtual java/io/PrintStream/println()V
    ldc 0
    return
    .end method
