#include "crypto/cnx/operations/cnx-operations.h"

void CN_ADAPTIVE_OPERATIONS_00110001(uint8_t* inPlaceOperand, const int8_t* appliedOperand, uint8_t op) {
  switch(op) {
    case 216:
      break;

    case 183:
      *inPlaceOperand = ~*inPlaceOperand;
      break;

    case 48:
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 197:
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 202;
      *inPlaceOperand = *appliedOperand;
      break;

    case 42:
      *inPlaceOperand += *appliedOperand;
      break;

    case 62:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 34;
      *inPlaceOperand += *appliedOperand;
      break;

    case 141:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 60;
      *inPlaceOperand = *appliedOperand;
      break;

    case 94:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 168;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 175;
      *inPlaceOperand = *appliedOperand;
      break;

    case 239:
      *inPlaceOperand |= *appliedOperand;
      break;

    case 208:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 236;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 84:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 122;
      *inPlaceOperand = ~*inPlaceOperand;
      break;

    case 23:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 157;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 190;
      *inPlaceOperand -= *appliedOperand;
      break;

    case 148:
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 93;
      *inPlaceOperand -= *appliedOperand;
      break;

    case 176:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 118;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 70;
      *inPlaceOperand = ~*inPlaceOperand;
      break;

    case 79:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 246;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 202;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 137:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 58;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 22;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 196;
      *inPlaceOperand -= *appliedOperand;
      break;

    case 126:
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 49:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 238;
      *inPlaceOperand = ~*inPlaceOperand;
      break;

    case 86:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 125;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 221:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 252;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 136;
      *inPlaceOperand += *appliedOperand;
      break;

    case 237:
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 99;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 212:
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 216;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 25;
      *inPlaceOperand = ~*inPlaceOperand;
      break;

    case 196:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 152;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 143;
      *inPlaceOperand += *appliedOperand;
      break;

    case 207:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 53;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 84;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 144;
      *inPlaceOperand = *appliedOperand;
      break;

    case 102:
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 108;
      *inPlaceOperand += *appliedOperand;
      break;

    case 163:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 226;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 202;
      *inPlaceOperand ^= *appliedOperand;
      break;

    case 135:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 132;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 210;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 160:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 81;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 37;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 51;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 11:
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 137;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 50;
      *inPlaceOperand -= *appliedOperand;
      break;

    case 219:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 105;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 239;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 130;
      *inPlaceOperand -= *appliedOperand;
      break;

    case 67:
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 157;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 67;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 177;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 127:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 94;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 92;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 192;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 222;
      *inPlaceOperand ^= *appliedOperand;
      break;

    case 152:
      *inPlaceOperand -= *appliedOperand;
      break;

    case 204:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 127;
      *inPlaceOperand = ~*inPlaceOperand;
      break;

    case 229:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 199;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 200:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 9;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 17;
      *inPlaceOperand = ~*inPlaceOperand;
      break;

    case 44:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 174;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 193:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 92;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 240;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 36:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 198;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 95;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 233:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 89;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 219;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 31;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 235:
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 55;
      *inPlaceOperand += *appliedOperand;
      break;

    case 181:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 252;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 231;
      *inPlaceOperand += *appliedOperand;
      break;

    case 203:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 98;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 54;
      *inPlaceOperand += *appliedOperand;
      break;

    case 52:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 138;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 74;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 2;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 170:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 243;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 214;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 21:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 122;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 130;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 10;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 172:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 202;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 189;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 69;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 70:
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 223;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 12;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 92;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 190;
      *inPlaceOperand = ~*inPlaceOperand;
      break;

    case 114:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 198;
      *inPlaceOperand = ~*inPlaceOperand;
      break;

    case 41:
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 203;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 113;
      *inPlaceOperand ^= *appliedOperand;
      break;

    case 132:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 191;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 65;
      *inPlaceOperand ^= *appliedOperand;
      break;

    case 121:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 239;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 80;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 235;
      *inPlaceOperand = *appliedOperand;
      break;

    case 254:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 234;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 153;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 31:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 11;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 115;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 5;
      *inPlaceOperand = *appliedOperand;
      break;

    case 37:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 36;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 47;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 138;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 177:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 125;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 174;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 233;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 242;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 75:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 214;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 219;
      *inPlaceOperand = ~*inPlaceOperand;
      break;

    case 68:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 159;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 60;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 152;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 156:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 63;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 235;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 208;
      *inPlaceOperand = *appliedOperand;
      break;

    case 32:
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 53;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 178;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 24;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 163;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 8:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 157;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 156;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 53;
      *inPlaceOperand -= *appliedOperand;
      break;

    case 154:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 157;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 72;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 163;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 26;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 117:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 231;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 211;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 158;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 67;
      *inPlaceOperand -= *appliedOperand;
      break;

    case 112:
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 207;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 59;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 57;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 185;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 196;
      *inPlaceOperand ^= *appliedOperand;
      break;

    case 57:
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 51:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 161;
      *inPlaceOperand += *appliedOperand;
      break;

    case 3:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 251;
      *inPlaceOperand -= *appliedOperand;
      break;

    case 165:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 161;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 45;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 1:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 162;
      *inPlaceOperand = *appliedOperand;
      break;

    case 80:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 57;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 163;
      *inPlaceOperand = ~*inPlaceOperand;
      break;

    case 143:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 224;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 14;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 6:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 235;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 160;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 198;
      *inPlaceOperand = *appliedOperand;
      break;

    case 162:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 222;
      *inPlaceOperand -= *appliedOperand;
      break;

    case 25:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 44;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 194;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 122:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 52;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 228;
      *inPlaceOperand += *appliedOperand;
      break;

    case 199:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 96;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 115;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 141;
      *inPlaceOperand ^= *appliedOperand;
      break;

    case 184:
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 222;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 159;
      *inPlaceOperand ^= *appliedOperand;
      break;

    case 206:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 15;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 9;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 239;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 128:
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 252;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 248;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 225;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 83:
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 195;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 19;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 240;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 90;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 231:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 179;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 130:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 231;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 48;
      *inPlaceOperand -= *appliedOperand;
      break;

    case 77:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 216;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 93;
      *inPlaceOperand += *appliedOperand;
      break;

    case 218:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 113;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 219;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 24;
      *inPlaceOperand = *appliedOperand;
      break;

    case 138:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 191;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 4;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 166:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 26;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 126;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 62;
      *inPlaceOperand = *appliedOperand;
      break;

    case 186:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 40;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 131;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 28;
      *inPlaceOperand ^= *appliedOperand;
      break;

    case 178:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 88;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 51;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 76;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 30;
      *inPlaceOperand -= *appliedOperand;
      break;

    case 10:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 108;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 212;
      *inPlaceOperand = ~*inPlaceOperand;
      break;

    case 7:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 241;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 253;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 251;
      *inPlaceOperand += *appliedOperand;
      break;

    case 140:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 175;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 143;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 5;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 129:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 246;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 11;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 112;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 37;
      *inPlaceOperand ^= *appliedOperand;
      break;

    case 28:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 9;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 11;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 54;
      *inPlaceOperand = *appliedOperand;
      break;

    case 245:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 175;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 141;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 44;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 62;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 230:
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 136;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 206;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 178;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 47;
      *inPlaceOperand = ~*inPlaceOperand;
      break;

    case 66:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 32;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 221;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 26;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 148;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 116;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 64:
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 209;
      *inPlaceOperand -= *appliedOperand;
      break;

    case 180:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 211;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 120;
      *inPlaceOperand ^= *appliedOperand;
      break;

    case 103:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 49;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 249;
      *inPlaceOperand -= *appliedOperand;
      break;

    case 211:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 19;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 218;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 146;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 228:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 28;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 32;
      *inPlaceOperand += *appliedOperand;
      break;

    case 182:
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 87;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 44;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 56;
      *inPlaceOperand += *appliedOperand;
      break;

    case 14:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 131;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 15;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 64;
      *inPlaceOperand -= *appliedOperand;
      break;

    case 213:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 64;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 195;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 59;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 49;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 113:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 236;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 177;
      *inPlaceOperand += *appliedOperand;
      break;

    case 246:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 156;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 126;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 242;
      *inPlaceOperand = ~*inPlaceOperand;
      break;

    case 46:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 134;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 106;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 141;
      *inPlaceOperand -= *appliedOperand;
      break;

    case 224:
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 62;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 114;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 79;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 164;
      *inPlaceOperand = ~*inPlaceOperand;
      break;

    case 214:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 45;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 66;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 9;
      *inPlaceOperand = ~*inPlaceOperand;
      break;

    case 88:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 6;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 74;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 48;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 252;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 134:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 82;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 122;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 201;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 102;
      *inPlaceOperand += *appliedOperand;
      break;

    case 119:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 122;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 38;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 145;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 23;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 114;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 123:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 226;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 97;
      *inPlaceOperand -= *appliedOperand;
      break;

    case 249:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 15;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 96;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 121;
      *inPlaceOperand -= *appliedOperand;
      break;

    case 232:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 72;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 197;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 238;
      *inPlaceOperand = *appliedOperand;
      break;

    case 58:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 176;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 158;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 21;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 108;
      *inPlaceOperand -= *appliedOperand;
      break;

    case 150:
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 74;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 128;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 224;
      *inPlaceOperand -= *appliedOperand;
      break;

    case 225:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 192;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 167;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 67;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 154;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 131:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 140;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 136;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 213;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 78;
      *inPlaceOperand = *appliedOperand;
      break;

    case 139:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 120;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 87;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 145;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 58;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 173;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 89:
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 239;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 189;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 218;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 78:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 176;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 188;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 116;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 72;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 189:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 172;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 137;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 141;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 182;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 187:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 134;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 181;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 134;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 97;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 254;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 99:
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 65;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 53;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 1;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 105;
      *inPlaceOperand ^= *appliedOperand;
      break;

    case 110:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 203;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 229;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 232;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 178;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 255;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 26:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 247;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 185;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 222;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 226;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 222;
      *inPlaceOperand ^= *appliedOperand;
      break;

    case 63:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 49;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 75;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 126;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 218;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 103;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 37;
      *inPlaceOperand += *appliedOperand;
      break;

    case 90:
      *inPlaceOperand = *appliedOperand;
      break;

    case 13:
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 70;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 146:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 30;
      *inPlaceOperand = *appliedOperand;
      break;

    case 222:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 154;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 1;
      *inPlaceOperand += *appliedOperand;
      break;

    case 91:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 197;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 202:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 225;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 215;
      *inPlaceOperand += *appliedOperand;
      break;

    case 0:
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 121;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 20;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 27:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 54;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 130;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 200;
      *inPlaceOperand += *appliedOperand;
      break;

    case 147:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 216;
      *inPlaceOperand ^= *appliedOperand;
      break;

    case 171:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 44;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 76;
      *inPlaceOperand += *appliedOperand;
      break;

    case 71:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 168;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 158;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 175:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 177;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 17;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 50;
      *inPlaceOperand = ~*inPlaceOperand;
      break;

    case 100:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 53;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 134;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 20:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 124;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 219;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 151;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 161:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 192;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 13;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 117;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 185:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 118;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 162;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 234;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 174;
      *inPlaceOperand = ~*inPlaceOperand;
      break;

    case 215:
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 134;
      *inPlaceOperand += *appliedOperand;
      break;

    case 168:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 106;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 68;
      *inPlaceOperand += *appliedOperand;
      break;

    case 4:
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 136;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 237;
      *inPlaceOperand -= *appliedOperand;
      break;

    case 76:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 209;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 217;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 179;
      *inPlaceOperand = *appliedOperand;
      break;

    case 159:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 166;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 130;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 9:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 144;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 173;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 129;
      *inPlaceOperand ^= *appliedOperand;
      break;

    case 255:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 83;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 38;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 39;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 106:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 136;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 211;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 201;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 120;
      *inPlaceOperand += *appliedOperand;
      break;

    case 252:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 136;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 127;
      *inPlaceOperand ^= *appliedOperand;
      break;

    case 157:
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 196;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 118;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 64;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 136:
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 107;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 111;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 38;
      *inPlaceOperand ^= *appliedOperand;
      break;

    case 179:
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 160;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 56;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 51;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 66;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 167:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 67;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 211;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 152;
      *inPlaceOperand = *appliedOperand;
      break;

    case 109:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 185;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 119;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 165;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 87;
      *inPlaceOperand = *appliedOperand;
      break;

    case 115:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 14;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 250;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 44;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 251;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 201:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 185;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 35;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 193;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 112;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 236;
      *inPlaceOperand = *appliedOperand;
      break;

    case 142:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 252;
      *inPlaceOperand = *appliedOperand;
      break;

    case 188:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 160;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 129;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 227:
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 72;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 142;
      *inPlaceOperand += *appliedOperand;
      break;

    case 47:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 122;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 159;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 0;
      *inPlaceOperand ^= *appliedOperand;
      break;

    case 173:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 239;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 219;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 40:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 226;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 170;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 35;
      *inPlaceOperand = *appliedOperand;
      break;

    case 69:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 55;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 240;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 46;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 33:
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 51;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 39;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 246;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 4;
      *inPlaceOperand = *appliedOperand;
      break;

    case 195:
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 56;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 218;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 5:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 220;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 91;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 132;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 97:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 244;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 124;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 198;
      *inPlaceOperand = *appliedOperand;
      break;

    case 251:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 47;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 15;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 198;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 70;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 15:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 66;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 2;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 179;
      *inPlaceOperand += *appliedOperand;
      break;

    case 87:
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 136;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 60;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 184;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 32;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 107:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 116;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 204;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 210;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 48;
      *inPlaceOperand = *appliedOperand;
      break;

    case 198:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 185;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 188;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 218;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 62;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 84;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 43:
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 62;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 152;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 145:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 222;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 99;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 147;
      *inPlaceOperand = *appliedOperand;
      break;

    case 151:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 218;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 73;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 236;
      *inPlaceOperand += *appliedOperand;
      break;

    case 93:
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 102;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 57;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 82;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 79;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 60:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 13;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 126;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 242;
      *inPlaceOperand -= *appliedOperand;
      break;

    case 18:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 97;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 228;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 250;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 164;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 234:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 155;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 7;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 71;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 250;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 253:
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 59;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 253;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 170;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 90;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 58;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 220:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 236;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 40;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 85;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 104:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 201;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 97;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 163;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 156;
      *inPlaceOperand = *appliedOperand;
      break;

    case 35:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 9;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 12;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 151;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 172;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 19:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 188;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 12;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 224;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 194;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 204;
      *inPlaceOperand += *appliedOperand;
      break;

    case 250:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 53;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 198;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 230;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 85;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 74:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 204;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 14;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 136;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 163;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 86;
      *inPlaceOperand ^= *appliedOperand;
      break;

    case 45:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 150;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 96;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 229;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 212;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 162;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 24:
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 87;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 73;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 8;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 0;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 136;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 7;
      *inPlaceOperand -= *appliedOperand;
      break;

    case 50:
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 141;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 116:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 126;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 203;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 53:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 89;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 222;
      *inPlaceOperand = *appliedOperand;
      break;

    case 65:
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 87;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 126;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 42;
      *inPlaceOperand ^= *appliedOperand;
      break;

    case 149:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 188;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 68;
      *inPlaceOperand = ~*inPlaceOperand;
      break;

    case 82:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 103;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 122;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 121;
      *inPlaceOperand = ~*inPlaceOperand;
      break;

    case 108:
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 105;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 39;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 179;
      *inPlaceOperand += *appliedOperand;
      break;

    case 17:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 254;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 33;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 219;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 21;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 194:
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 243;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 147;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 73:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 100;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 105;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 153;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 124:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 227;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 247;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 87;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 29:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 72;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 210;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 66;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 5;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 217:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 235;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 194;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 88;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 38:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 248;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 146;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 129;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 178;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 55:
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 10;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 205;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 181;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 234;
      *inPlaceOperand ^= *appliedOperand;
      break;

    case 158:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 189;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 91;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 111;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 42;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 77;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 226:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 48;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 57;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 247:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 127;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 86;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 89;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 209:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 63;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 91;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 230;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 244:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 28;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 68;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 165;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 129;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 174:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 117;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 85;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 119;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 210:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 212;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 43;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 49;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 193;
      *inPlaceOperand ^= *appliedOperand;
      break;

    case 12:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 113;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 152;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 248;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 223;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 34:
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 132;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 108;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 226;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 118;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 239;
      *inPlaceOperand += *appliedOperand;
      break;

    case 105:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 175;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 100;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 143;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 56:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 125;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 74;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 224;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 54;
      *inPlaceOperand = *appliedOperand;
      break;

    case 240:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 217;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 91;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 116;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 131;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 16:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 155;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 113;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 197;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 206;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 55;
      *inPlaceOperand = *appliedOperand;
      break;

    case 72:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 14;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 94;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 53;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 34;
      *inPlaceOperand ^= *appliedOperand;
      break;

    case 85:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 132;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 216;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 146;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 234;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 23;
      *inPlaceOperand = ~*inPlaceOperand;
      break;

    case 241:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 151;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 212;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 104;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 157;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 213;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 223:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 103;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 236;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 162;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 165;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 73;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 77;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 39:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 76;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 93;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 190:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 37;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 207;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 122;
      *inPlaceOperand -= *appliedOperand;
      break;

    case 243:
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 180;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 75;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 239;
      *inPlaceOperand += *appliedOperand;
      break;

    case 81:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 178;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 4;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 209;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 117;
      *inPlaceOperand -= *appliedOperand;
      break;

    case 59:
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 252;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 91;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 63;
      *inPlaceOperand ^= *appliedOperand;
      break;

    case 98:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 104;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 83;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 213;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 91;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 144:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 229;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 18;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 218;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 172;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 54:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 85;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 163;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 22;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 91;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 102;
      *inPlaceOperand = ~*inPlaceOperand;
      break;

    case 236:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 211;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 151;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 211;
      *inPlaceOperand += *appliedOperand;
      break;

    case 155:
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 183;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 146;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 126;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 166;
      *inPlaceOperand += *appliedOperand;
      break;

    case 242:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 174;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 67;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 146;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 150;
      *inPlaceOperand = ~*inPlaceOperand;
      break;

    case 92:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 155;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 180;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 100;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 36;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 161;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 61:
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 89;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 100;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 135;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 196;
      *inPlaceOperand ^= *appliedOperand;
      break;

    case 30:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 65;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 219;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 20;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 235;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 88;
      *inPlaceOperand += *appliedOperand;
      break;

    case 111:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 9;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 210;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 157;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 89;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 142;
      *inPlaceOperand += *appliedOperand;
      break;

    case 22:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 205;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 202;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 156;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 174;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 172;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 202;
      *inPlaceOperand |= *appliedOperand;
      break;

    case 153:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 166;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 116;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 148;
      *inPlaceOperand += *appliedOperand;
      break;

    case 125:
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 119;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 82;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 218;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 7;
      *inPlaceOperand = ~*inPlaceOperand;
      break;

    case 118:
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 98;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 20;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 69;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 159;
      *inPlaceOperand += *appliedOperand;
      break;

    case 169:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 249;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 109;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 106;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 40;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 227;
      *inPlaceOperand -= *appliedOperand;
      break;

    case 95:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 134;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 233;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 61;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 96;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 101:
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 237;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 23;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 26;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 41;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 133;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 248:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 156;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 198;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 99;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 209;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 216;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 2:
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 170;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 180;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 243;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 155;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 183;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 102;
      *inPlaceOperand += *appliedOperand;
      break;

    case 238:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 72;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 157;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 121;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 20;
      *inPlaceOperand = ~*appliedOperand;
      break;

    case 133:
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 199;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 143;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 21;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 252;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 1;
      *inPlaceOperand -= *appliedOperand;
      break;

    case 191:
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 77;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 159;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 96;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 135;
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 76;
      *inPlaceOperand = ~*inPlaceOperand;
      break;

    case 96:
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 141;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 97;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 12;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 170;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 57;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 160;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 164:
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 154;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 191;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 122;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 12;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 48;
      *inPlaceOperand &= *appliedOperand;
      break;

    case 205:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 12;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 163;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 101;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 191;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 137;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 167;
      *inPlaceOperand -= *appliedOperand;
      break;

    case 192:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 129;
      *inPlaceOperand |= *appliedOperand;
      *inPlaceOperand ^= 48;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 178;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 77;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 61;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 19;
      *inPlaceOperand += *appliedOperand;
      break;

    case 120:
      *inPlaceOperand &= *appliedOperand;
      *inPlaceOperand ^= 211;
      *inPlaceOperand = *appliedOperand;
      *inPlaceOperand ^= 134;
      *inPlaceOperand = ~*inPlaceOperand;
      *inPlaceOperand ^= 213;
      *inPlaceOperand ^= *appliedOperand;
      *inPlaceOperand ^= 205;
      *inPlaceOperand += *appliedOperand;
      *inPlaceOperand ^= 181;
      *inPlaceOperand -= *appliedOperand;
      *inPlaceOperand ^= 61;
      *inPlaceOperand = ~*appliedOperand;
      *inPlaceOperand ^= 161;
      *inPlaceOperand |= *appliedOperand;
      break;

    default:
        break;
  }
}
