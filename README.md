# sylvan-pod-server
http server for pods

## To build and test

Note: currently working on a new package manager to use on this package.  Other managers should still 
work(as far as they do) as https://github.com/DataDriven-CAM/cnpm.git is based on the package.json npm format.

### cnpm building

```
cnpm  install

export CLASSPATH=`pwd`/cpp_modules/antlr4/tool/target/antlr4-4.13.2-SNAPSHOT-complete.jar
cd grammars
java -Xmx500M -cp $CLASSPATH org.antlr.v4.Tool -Dlanguage=Cpp -o ../src/parsing -lib ../grammars -package sylvanmats HTTP.g4
#java -Xmx500M -cp $CLASSPATH org.antlr.v4.Tool -Dlanguage=Java -o ../tmp/sylvanmats -lib ../grammars -package sylvanmats HTTP.g4

cnpm build
./main

#building and running unit tests
cnpm test

#building and running cypress
cnpm front-end


```

## Configuration

The config.toml file allows the vhost directory

## Contact

My twitch stream is https://www.twitch.tv/sylvanmats