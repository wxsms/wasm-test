;; test.wat
(module
  (import "env" "mem" (memory 1)) ;; 这里指定了从 env.mem 中导入一个内存对象
  (func (export "get") (result i32)  ;; 定义并导出一个叫做“get”的函数，这个函数拥有一个 int32 类型的返回值，没有参数
    memory.size))  ;; 最终返回 memory 对象的“尺寸”（单位为“页”，目前规定 1 页 = 64 KiB = 65536 Bytes）
