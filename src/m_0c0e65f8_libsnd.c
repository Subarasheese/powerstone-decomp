/* @unit 0c0e65f8-0c0e6834 -optimize=0 */
typedef struct { char p0[9]; char b9; char p1[24]; short h34; char p2[13]; char b49[1]; } S;
void FUN_0c0e65f8(short a){ return; }
void FUN_0c0e660c(short a){ return; }
void FUN_0c0e6620(char *d){ char *dst; char *src; int i; src=(char*)0x0c155c31; dst=d; for(i=0;i<64;i++){ *dst++=*src++; } return; }
void FUN_0c0e6668(S *p, short i, short v){ S *s=p; s->h34=(i<<11)|v; return; }
void FUN_0c0e669e(char *p, short i){ char *q=p+9; switch(i){case 1:*q=*q&128;break;case 2:*q=(*q&128)|1;break;case 4:*q=(*q&128)|2;break;} return; }
void FUN_0c0e66f4(char *p, short i, short v){ char *s=p; *(s+i*4+49)=v; return; }
void FUN_0c0e6726(char *p, short i, short v){ char *s=p; *(s+i*4+50)=v; return; }
void FUN_0c0e6758(char *p, short i){ char *s=p; switch(i){case 4:s[8]=3;break;case 8:s[8]=1;break;case 16:s[8]=0;break;} return; }
void FUN_0c0e67a2(char *p, short i, short v){ char *q; int n; int x; q=p+51; x=(i<<4)|v; for(n=0;n<4;n++){ *q=x; q+=4; } return; }
void FUN_0c0e67f4(char *p, short v){ char *q; int n; q=p+48; for(n=0;n<4;n++){ *q=v; q+=4; } return; }
