    .class public Main
    .super java/lang/Object
    .method public static main([Ljava/lang/String;)I
    .limit stack 100
    .limit locals 100
    getstatic java/lang/System/out Ljava/io/PrintStream;
    ldc "Hello "
    invokevirtual java/io/PrintStream/print(Ljava/lang/String;)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    ldc "World"
    invokevirtual java/io/PrintStream/print(Ljava/lang/String;)V
    return
    .end method
