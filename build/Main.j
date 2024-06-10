    .class public Main
    .super java/lang/Object
    .method public static calculate_pi([I)F
    .limit stack 100
    .limit locals 100
    .method public static main([Ljava/lang/String;)I
    .limit stack 100
    .limit locals 100
    getstatic java/lang/System/out Ljava/io/PrintStream;
    ldc "Approximation of Pi after "
    ldc " terms: "
    invokevirtual java/io/PrintStream/print(Ljava/lang/String;)V
    return
    .end method
