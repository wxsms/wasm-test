# wasm-test

A repo with some WebAssembly learning examples.

```
$ emcc -o main.html main.c -O3 -s WASM=1 -s "EXTRA_EXPORTED_RUNTIME_METHODS=['ccall', 'cwrap']"  --shell-file ../html_template/shell_minimal.html
```