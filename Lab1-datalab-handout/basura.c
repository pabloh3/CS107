
int main(void)
{
int n = 32;
int x = -2147483647;
int m = -1;
unsigned int x3 = x;
unsigned int signo = x3>>31;
int x_pos = ~x+1;
int x2 = x+signo*2*(x_pos);
int comparador = (m<<n)>>1;
int comparacion = comparador^x2;
int cregresado = (comparacion<<1)>>n;
int  negado= cregresado+1;
unsigned int negado_pos = negado;
int res = (~negado_pos)>>31;
}
