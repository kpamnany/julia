// This file is a part of Julia. License is MIT: https://julialang.org/license

#ifndef JL_TRACE_H
#define JL_TRACE_H

#ifndef ENABLE_TRACING

#define JL_TRACE(ev)

#else // ENABLE_TRACING

#define JL_TRACE(ev) jl_trace(ev)

STATIC_INLINE void jl_trace() {
}

#endif // ENABLE_TRACING

#endif // JL_TRACE_H
