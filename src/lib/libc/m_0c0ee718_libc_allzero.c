/* @unit 0c0ee718-0c0ee738 */
int allzero(char *p, int n){ int i; for(i=0;i<n;i++){ if(*p) return 0; p++; } return 1; }


