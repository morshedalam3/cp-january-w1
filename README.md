# cp-january-w1

///.........Bit_Manipulation...........///
#define MSB(mask) 63-**builtin_clzll(mask) /// 0 -> -1
#define LSB(mask) **builtin_ctzll(mask) /// 0 -> 64
#define ONE(mask) **builtin_popcountll(mask)
#define CHECK(mask,bit) (mask&(1LL<<bit))
#define ON(mask,bit) (mask(1LL<<bit))
#define OFF(mask,bit) (mask&~(1LL<<bit))
#define CHANGE(mask,bit) (mask^(1LL<<bit))
#define LOG2(x) (**builtin_clz(x) ^ 31)
#define LSB1(mask) (\_\_builtin_ffs(mask) - 1)
#define STRING_TO_INT(mask) (std::bitset<64>(mask).to_ullong())
