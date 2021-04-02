#include <avr/pgmspace.h>
// Lookup table to convert ascii characters in to keyboard scan codes
// Format: most signifficant bit indicates if scan code should be sent with shift modifier
//  next most significant bit is used for AltGr modifier
// remaining 6 bits are to be used as scan code number.
// scan codes correspond to the key position as if it were an US 104 keyboard

#define Shift 0x80
#define AltGr 0x40

const unsigned char ascii_to_scan_code_table[] PROGMEM = {
  //          Code	   HID Usage	Key pos on a US Keyboard
  // /* ASCII: 0  	*/ 0,
  // /* ASCII: 1  	*/ 0,
  // /* ASCII: 2  	*/ 0,
  // /* ASCII: 3  	*/ 0,
  // /* ASCII: 4  	*/ 0,
  // /* ASCII: 5  	*/ 0,
  // /* ASCII: 6  	*/ 0,
  // /* ASCII: 7  	*/ 0,
  /* ASCII:   8  BS	*/ 0x2a,	// BS
  /* ASCII:   9  TAB	*/ 0x2b,	// HT
  /* ASCII:  10  LF 	*/ 0x28,	// LF
  /* ASCII:  11  	*/ 0,
  /* ASCII:  12  	*/ 0,
  /* ASCII:  13  	*/ 0,
  /* ASCII:  14  	*/ 0,
  /* ASCII:  15  	*/ 0,
  /* ASCII:  16  	*/ 0,
  /* ASCII:  17  	*/ 0,
  /* ASCII:  18  	*/ 0,
  /* ASCII:  19  	*/ 0,
  /* ASCII:  20  	*/ 0,
  /* ASCII:  21  	*/ 0,
  /* ASCII:  22  	*/ 0,
  /* ASCII:  23  	*/ 0,
  /* ASCII:  24  	*/ 0,
  /* ASCII:  25  	*/ 0,
  /* ASCII:  26  	*/ 0,
  /* ASCII:  27  ESC	*/ 0x29,	// ESC
  /* ASCII:  28  	*/ 0,
  /* ASCII:  29  	*/ 0,
  /* ASCII:  30  	*/ 0,
  /* ASCII:  31  	*/ 0,
  /* ASCII:  32  SPC	*/ 0x2C,	// ' '
  /* ASCII:  33  !	*/ 0x25,	// '8'
  /* ASCII:  34  "	*/ 0x20,	// '3'
  /* ASCII:  35  #	*/ 0x20|AltGr,	// '3'
  /* ASCII:  36  $	*/ 0x30,	// ']'
  /* ASCII:  37  %	*/ 0x34|Shift,	// '''
  /* ASCII:  38  &	*/ 0x1e,	// '1'
  /* ASCII:  39  '	*/ 0x21,	// '4'
  /* ASCII:  40  (	*/ 0x22,	// '5'
  /* ASCII:  41  )	*/ 0x2d,	// '-'
  /* ASCII:  42  *	*/ 0x30|Shift,	// ']'
  /* ASCII:  43  +	*/ 0x38|Shift,	// '='
  /* ASCII:  44  ,	*/ 0x10,	// 'm'
  /* ASCII:  45  -	*/ 0x2e,	// '='
  /* ASCII:  46  .	*/ 0x36|Shift,	// ','
  /* ASCII:  47  /	*/ 0x37|Shift,	// '.'
  /* ASCII:  48  0	*/ 0x27|Shift,	// '0'
  /* ASCII:  49  1	*/ 0x1e|Shift,	// '1'
  /* ASCII:  50  2	*/ 0x1f|Shift,	// '2'
  /* ASCII:  51  3	*/ 0x20|Shift,	// '3'
  /* ASCII:  52  4	*/ 0x21|Shift,	// '4'
  /* ASCII:  53  5	*/ 0x22|Shift,	// '5'
  /* ASCII:  54  6	*/ 0x23|Shift,	// '6'
  /* ASCII:  55  7	*/ 0x24|Shift,	// '7'
  /* ASCII:  56  8	*/ 0x25|Shift,	// '8'
  /* ASCII:  57  9	*/ 0x26|Shift,	// '9'
  /* ASCII:  58  :	*/ 0x37,	// '.'
  /* ASCII:  59  ;	*/ 0x36,	// ','
  /* ASCII:  60  <	*/ 0x64,	// '\'
  /* ASCII:  61  =	*/ 0x38,	// '/'
  /* ASCII:  62  >	*/ 0x64|Shift,	// '\'
  /* ASCII:  63  ?	*/ 0x10|Shift,	// 'm'
  /* ASCII:  64  @	*/ 0x1f|AltGr,	// '2'
  /* ASCII:  65  A	*/ 0x14|Shift,	// 'q'
  /* ASCII:  66  B	*/ 0x05|Shift,	// 'b'
  /* ASCII:  67  C	*/ 0x06|Shift,	// 'c'
  /* ASCII:  68  D	*/ 0x07|Shift,	// 'd'
  /* ASCII:  69  E	*/ 0x08|Shift,	// 'e'
  /* ASCII:  70  F	*/ 0x09|Shift,	// 'f'
  /* ASCII:  71  G	*/ 0x0a|Shift,	// 'g'
  /* ASCII:  72  H	*/ 0x0b|Shift,	// 'h'
  /* ASCII:  73  I	*/ 0x0c|Shift,	// 'i'
  /* ASCII:  74  J	*/ 0x0d|Shift,	// 'j'
  /* ASCII:  75  K	*/ 0x0e|Shift,	// 'k'
  /* ASCII:  76  L	*/ 0x0f|Shift,	// 'l'
  /* ASCII:  77  M	*/ 0x33|Shift,	// ';'
  /* ASCII:  78  N	*/ 0x11|Shift,	// 'n'
  /* ASCII:  79  O	*/ 0x12|Shift,	// 'o'
  /* ASCII:  80  P	*/ 0x13|Shift,	// 'p'
  /* ASCII:  81  Q	*/ 0x04|Shift,	// 'a'
  /* ASCII:  82  R	*/ 0x15|Shift,	// 'r'
  /* ASCII:  83  S	*/ 0x16|Shift,	// 's'
  /* ASCII:  84  T	*/ 0x17|Shift,	// 't'
  /* ASCII:  85  U	*/ 0x18|Shift,	// 'u'
  /* ASCII:  86  V	*/ 0x19|Shift,	// 'v'
  /* ASCII:  87  W	*/ 0x1d|Shift,	// 'z'
  /* ASCII:  88  X	*/ 0x0b|Shift,	// 'x'
  /* ASCII:  89  Y	*/ 0x0c|Shift,	// 'y'
  /* ASCII:  90  Z	*/ 0x1a|Shift,	// 'w'
  /* ASCII:  91  [	*/ 0x2F|AltGr,	// '['
  /* ASCII:  92  \	*/ 0x31|AltGr,	// '\'
  /* ASCII:  93  ]	*/ 0x30|AltGr,	// ']'
  /* ASCII:  94  ^	*/ 0x23|AltGr,	// '6'
  /* ASCII:  95  _	*/ 0x2E|Shift,	// '='
  /* ASCII:  96  `	*/ 0x31|AltGr,	// '\'
  /* ASCII:  97   a	*/ 0x14,	// 'q'
  /* ASCII:  98   b	*/ 0x05,	// 'b'
  /* ASCII:  99   c	*/ 0x06,	// 'c'
  /* ASCII: 100   d	*/ 0x07,	// 'd'
  /* ASCII: 101   e	*/ 0x08,	// 'e'
  /* ASCII: 102   f	*/ 0x09,	// 'f'
  /* ASCII: 103   g	*/ 0x0a,	// 'g'
  /* ASCII: 104   h	*/ 0x0b,	// 'h'
  /* ASCII: 105   i	*/ 0x0c,	// 'i'
  /* ASCII: 106   j	*/ 0x0d,	// 'j'
  /* ASCII: 107   k	*/ 0x0e,	// 'k'
  /* ASCII: 108   l	*/ 0x0f,	// 'l'
  /* ASCII: 109   m	*/ 0x33,	// ';'
  /* ASCII: 110   n	*/ 0x11,	// 'n'
  /* ASCII: 111   o	*/ 0x12,	// 'o'
  /* ASCII: 112   p	*/ 0x13,	// 'p'
  /* ASCII: 113   q	*/ 0x04,	// 'a'
  /* ASCII: 114   r	*/ 0x15,	// 'r'
  /* ASCII: 115   s	*/ 0x16,	// 's'
  /* ASCII: 116   t	*/ 0x17,	// 't'
  /* ASCII: 117   u	*/ 0x18,	// 'u'
  /* ASCII: 118   v	*/ 0x19,	// 'v'
  /* ASCII: 119   w	*/ 0x1d,	// 'z'
  /* ASCII: 120   x	*/ 0x1b,	// 'x'
  /* ASCII: 121   y	*/ 0x1c,	// 'y'
  /* ASCII: 122   z	*/ 0x1a,	// 'w'
  /* ASCII: 123   {	*/ 0x26|AltGr,	// '9'
  /* ASCII: 124   |	*/ 0x1e|AltGr,	// '1'
  /* ASCII: 125   }	*/ 0x27|AltGr,	// '0'
  /* ASCII: 126   ~	*/ 0x38|AltGr,	// '/'
};
