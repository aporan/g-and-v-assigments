This assignmet requires Fast Light Toolkit

## [FLTK](http://www.fltk.org/software.php) Download and Install
- Download version 1.3.0
```bash
tar -xvf [downloaded-file]
cd [downloaded-file]/
./configure --enable-shared --enable-xdbe --enable-xft
make
sudo make install
```

## Compile
```bash
cd assignment2/
make
```

## Run
```bash
./a2 data/[any].obj
```

## Clean Build
```
make clean
```

Note:
If compilation fails
- Check fltk readme for list of more dependency packages.
- Ideally, the other required packages should be installed by default in Linux.
