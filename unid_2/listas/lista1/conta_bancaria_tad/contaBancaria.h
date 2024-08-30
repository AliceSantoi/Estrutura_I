/*Funções oferecidas pelo contaBancaria.c*/

/*struct criada com os dados:
    int numero;//referente ao numero da conta
    char titular//referente ao dono da conta
    float saldo//referente ao saldo da conta
*/
typedef struct ContaBancaria ContaB;

/*Função responsavel por receber estrutura do primeiro titular e alocar de forma dinâmica*/
ContaB *cria_conta(char *titular, int numero, float saldo);

/*Função responsavel por receber estrutura do segundo titular e alocar de forma dinâmica*/
ContaB *cria_conta2(char *titular, int numero, float saldo);

/*Função responsavel por receber endereço de estrutura do primeiro titular e valor a ser depositado na conta
 */
void deposita(ContaB *conta, float dinheiro);

/*Função responsavel por receber endereço de estrutura do primeiro titular e e valor para saque*/
void sacar(ContaB *conta, float valor);

/*Função responsavel por receber endereço de estrutura do primeiro e segundo titular, alem do valor a ser transferido para segundo titular
*/
void transfere(ContaB *conta, ContaB *conta2, float valor);