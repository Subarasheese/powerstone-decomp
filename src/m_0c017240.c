/* @unit 0c017240-0c0172e0 */
struct S { char pad[8]; char st; char pad2[27]; float a; char pad3[52]; float b; };
extern void FUN_0c059330(struct S *p);
void FUN_0c017240(struct S *p)
{
    switch (p->st) {
    case 0:
        p->b = 0.0f;
        p->st++;
    case 1:
        p->a += 0.015f;
        p->b += 0.02f;
        if (p->b > 1.0f) p->st++;
        break;
    case 2:
        p->a += 0.01f;
        if (p->a > 1.25f) p->st++;
        break;
    case 3:
        p->a += 0.015f;
        p->b -= 0.02f;
        if (p->b < 0.0f) p->st++;
        break;
    default:
        FUN_0c059330(p);
    }
}
