#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

/**
 * Constants shared by multiple CSS Box Alignment properties
 *
 * These constants match Gecko's `NS_STYLE_ALIGN_*` constants.
 */
typedef struct {
  uint8_t bits;
} AlignFlags;
/**
 * 'auto'
 */
#define AlignFlags_AUTO (AlignFlags){ .bits = (uint8_t)0 }
/**
 * 'normal'
 */
#define AlignFlags_NORMAL (AlignFlags){ .bits = (uint8_t)1 }
/**
 * 'start'
 */
#define AlignFlags_START (AlignFlags){ .bits = (uint8_t)(1 << 1) }
/**
 * 'end'
 */
#define AlignFlags_END (AlignFlags){ .bits = (uint8_t)(1 << 2) }
#define AlignFlags_ALIAS (AlignFlags){ .bits = (uint8_t)(AlignFlags_END).bits }
/**
 * 'flex-start'
 */
#define AlignFlags_FLEX_START (AlignFlags){ .bits = (uint8_t)(1 << 3) }
#define AlignFlags_MIXED (AlignFlags){ .bits = (uint8_t)(((1 << 4) | (AlignFlags_FLEX_START).bits) | (AlignFlags_END).bits) }
#define AlignFlags_MIXED_SELF (AlignFlags){ .bits = (uint8_t)(((1 << 5) | (AlignFlags_FLEX_START).bits) | (AlignFlags_END).bits) }

typedef struct {
  uint32_t bits;
} DebugFlags;
/**
 * Flag with the topmost bit set of the u32
 */
#define DebugFlags_BIGGEST_ALLOWED (DebugFlags){ .bits = (uint32_t)(1 << 31) }

void root(AlignFlags flags, DebugFlags bigger_flags);
