# Steps

1. ```cd src/main/java```

2. ```javac -h . HelloWorldJni.java```

3. ```g++ -c -fPIC -I${JAVA_HOME}/include -I${JAVA_HOME}/include/darwin hello.cpp -o hello.o```

4. ```g++ -dynamiclib -o libnative.dylib hello.o -lc```

```then run``` 

```sh 
java -cp . -Djava.library.path=.  HelloWorldJni         
```
