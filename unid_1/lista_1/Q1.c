int main(){

int x, y, *p;
y = 0;
p = &y;//p recebe o endereço de y 
x = *p;//x recebe o valor que p está armazenando na memória
x = 4;//o valor de x é alterado para 4
(*p)++;//o valor do endereço que p está armazenando (y) é somado +1 ((*p) = (*p) + 1);
--x;//o valor de x é diminuido -1
(*p) += x;//o valor do endereço que (*p) está armazenando é somado com ele mesmo mais o valor de x ((*p) = (p*) + x)
//x = 3; y = 4; p = &y
}