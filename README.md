# JNIDemo
一个简单的JNI Demo

注意事项:
1. 不同操作系统下生成的动态链接文件后缀不相同，Windows下为ddl, MacOS(Java<1.7)为jnilib, MacOS(Java>=1.7)为dylib, 其余为so
2. 生成的.h与.c的函数名要一致，编译时可能不会报错
3. 在运行时指定参数-Djava.library.path=/your/path/to/lib
4. 编译命令`gcc -o libHelloImpl.dylib -lc -shared -I$JAVA_HOME/include -I$JAVA_HOME/include/darwin com_alibaba_Hello.c` 不同系统下inlcude路径不同，MacOS下为darwin, Linux下为linux
