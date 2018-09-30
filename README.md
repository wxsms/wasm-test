# wasm-test

A repo with some WebAssembly learning examples.

Installations:

```
$ git clone https://github.com/juj/emsdk.git
$ cd emsdk
$ ./emsdk install latest
$ ./emsdk activate latest
$ source ./emsdk_env.sh
```

```
$ git clone --recursive https://github.com/WebAssembly/wabt
$ cd wabt
$ make
```

c2wasm:

```
$ emcc -o main.html main.c -O3 -s WASM=1 -s "EXTRA_EXPORTED_RUNTIME_METHODS=['ccall', 'cwrap']"  --shell-file ../html_template/shell_minimal.html
```

wat2wasm

```
$ wat2wasm test.wat -o test.wasm
```

Run:

```
$ emrun --no_browser --port 8080 .
```