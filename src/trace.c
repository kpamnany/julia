// This file is a part of Julia. License is MIT: https://julialang.org/license

#include <inttypes.h>
#include "julia.h"
#include "julia_internal.h"
#include "options.h"
#include "stdio.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef ENABLE_TRACING
#include "trace.h"

void jl_init_tracing(void)
{
}

void jl_flush_traces(void)
{
}

void jl_shutdown_tracing(void)
{
}

#else

void jl_init_tracing(void) { }
void jl_flush_traces(void) { }
void jl_shutdown_tracing(void) { }

#endif

#ifdef __cplusplus
}
#endif
