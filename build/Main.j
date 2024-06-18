    .source Main.j
    .class public Main
    .super java/lang/Object
    .method public static main([Ljava/lang/String;)V
    .limit stack 100
    .limit locals 100
    getstatic java/lang/System/out Ljava/io/PrintStream;
    ldc "Hello "
    invokevirtual java/io/PrintStream/print(Ljava/lang/String;)V

    getstatic java/lang/System/out Ljava/io/PrintStream;
    ldc "World"
    invokevirtual java/io/PrintStream/print(Ljava/lang/String;)V
    
    getstatic java/lang/System/out Ljava/io/PrintStream;
    invokevirtual java/io/PrintStream/println()V
    return
    .end method
