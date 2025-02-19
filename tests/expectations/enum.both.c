#if 0
''' '
#endif

#ifdef __cplusplus
template <typename T>
using Box = T*;
#endif

#if 0
' '''
#endif


#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

enum A {
  a1 = 0,
  a2 = 2,
  a3,
  a4 = 5,
};
typedef uint64_t A;

enum B {
  b1 = 0,
  b2 = 2,
  b3,
  b4 = 5,
};
typedef uint32_t B;

enum C {
  c1 = 0,
  c2 = 2,
  c3,
  c4 = 5,
};
typedef uint16_t C;

enum D {
  d1 = 0,
  d2 = 2,
  d3,
  d4 = 5,
};
typedef uint8_t D;

enum E {
  e1 = 0,
  e2 = 2,
  e3,
  e4 = 5,
};
typedef uintptr_t E;

enum F {
  f1 = 0,
  f2 = 2,
  f3,
  f4 = 5,
};
typedef intptr_t F;

typedef enum L {
  l1,
  l2,
  l3,
  l4,
} L;

enum M {
  m1 = -1,
  m2 = 0,
  m3 = 1,
};
typedef int8_t M;

typedef enum N {
  n1,
  n2,
  n3,
  n4,
} N;

enum O {
  o1,
  o2,
  o3,
  o4,
};
typedef int8_t O;

typedef struct J J;

typedef struct K K;

typedef struct Opaque Opaque;

enum G_Tag {
  Foo,
  Bar,
  Baz,
};
typedef uint8_t G_Tag;

typedef struct Bar_Body {
  G_Tag tag;
  uint8_t x;
  int16_t y;
} Bar_Body;

typedef union G {
  G_Tag tag;
  struct {
    G_Tag foo_tag;
    int16_t foo;
  };
  Bar_Body bar;
} G;

typedef enum H_Tag {
  H_Foo,
  H_Bar,
  H_Baz,
} H_Tag;

typedef struct H_Bar_Body {
  uint8_t x;
  int16_t y;
} H_Bar_Body;

typedef struct H {
  H_Tag tag;
  union {
    struct {
      int16_t foo;
    };
    H_Bar_Body bar;
  };
} H;

enum ExI_Tag {
  ExI_Foo,
  ExI_Bar,
  ExI_Baz,
};
typedef uint8_t ExI_Tag;

typedef struct ExI_Bar_Body {
  uint8_t x;
  int16_t y;
} ExI_Bar_Body;

typedef struct ExI {
  ExI_Tag tag;
  union {
    struct {
      int16_t foo;
    };
    ExI_Bar_Body bar;
  };
} ExI;

enum P_Tag {
  P0,
  P1,
};
typedef uint8_t P_Tag;

typedef struct P1_Body {
  uint8_t _0;
  uint8_t _1;
  uint8_t _2;
} P1_Body;

typedef struct P {
  P_Tag tag;
  union {
    struct {
      uint8_t p0;
    };
    P1_Body p1;
  };
} P;

typedef enum Q_Tag {
  Ok,
  Err,
} Q_Tag;

typedef struct Q {
  Q_Tag tag;
  union {
    struct {
      uint32_t *ok;
    };
    struct {
      uint32_t err;
    };
  };
} Q;

void root(struct Opaque *opaque,
          A a,
          B b,
          C c,
          D d,
          E e,
          F f,
          union G g,
          struct H h,
          struct ExI i,
          struct J j,
          struct K k,
          enum L l,
          M m,
          enum N n,
          O o,
          struct P p,
          struct Q q);

#if 0
''' '
#endif

#include <stddef.h>
#include "testing-helpers.h"
static_assert(offsetof(CBINDGEN_STRUCT(P), tag) == 0, "unexpected offset for tag");
static_assert(offsetof(CBINDGEN_STRUCT(P), p0) == 1, "unexpected offset for p0");
static_assert(offsetof(CBINDGEN_STRUCT(P), p0) == 1, "unexpected offset for p1");
static_assert(sizeof(CBINDGEN_STRUCT(P)) == 4, "unexpected size for P");

#if 0
' '''
#endif
