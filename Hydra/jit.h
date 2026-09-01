#ifndef HYDRA_JIT_H
#define HYDRA_JIT_H

#include "zend.h"

void hydra_jit_init(void);
bool hydra_jit_compile_hot_path(zend_op_array *op_array);

#endif /* HYDRA_JIT_H */
